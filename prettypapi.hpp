#pragma once

/**
 * @file prettypapi.hpp
 * @author Manuel Reber (reberma@student.ethz.ch)
 * @brief Small header library for pretty printing papi counters.
 * @version 0.1
 * @date 2022-07-06
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <stdarg.h>

#include <chrono>
#include <functional>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

#include "papi/papi.h"

#define LOGGING_LEVEL_TYPE enum papi::logger::logging_level
#define LOGGING_LEVEL_ERROR papi::logger::LOG_LEVEL_ERROR
#define LOGGING_LEVEL_SUCCESS papi::logger::LOG_LEVEL_SUCCESS
#define LOGGING_LEVEL_INFO papi::logger::LOG_LEVEL_INFO

#define LOGGING_LEVEL_NAME papi::logger::level_name
#define LOGGING_LEVEL_COLOR papi::logger::colors

#define papi_success(...) papi::logger::log_papi(LOGGING_LEVEL_SUCCESS, __VA_ARGS__)
#define papi_error(...) papi::logger::log_papi(LOGGING_LEVEL_ERROR, __VA_ARGS__)
#define papi_info(...) papi::logger::log_papi(LOGGING_LEVEL_INFO, __VA_ARGS__)

#define PAPI_STR_LEN 30

#define indent(space, size)          \
    space = "";                      \
    for (int i = 0; i < size; i++) { \
        space += " ";                \
    }                                \
    sstr << space

namespace papi {
using event_code = int;
using papi_counter = long long;
using func_t = std::function<void(papi::event_code, papi::papi_counter *)>;

static std::vector<papi::func_t> s_functions;
static std::vector<std::string> s_function_names;

template <papi::event_code... _Events>
class prettypapi {
   public:
    explicit prettypapi() { this->n = sizeof...(_Events); }

    size_t get_number_of_events() { return this->n; }

    size_t get_longest_function_name_size() {
        size_t max = 9;  // Size of the string "Benchmark";
        for (std::string func_name : s_function_names) {
            size_t func_size = func_name.size();
            max = func_size > max ? func_size : max;
        }
        return max;
    }

    std::string get_header_line() {
        std::string header;
        unsigned int size = this->get_longest_function_name_size() + PAPI_STR_LEN;
        for (int i = 0; i < (this->n) - 1; i++) {
            size += PAPI_STR_LEN;
        }
        int last_counter_length = get_event_name(this->event_codes[this->n - 1]).size();
        size += last_counter_length;
        for (int i = 0; i < size; i++) {
            header += "-";
        }
        return header;
    }

    std::string get_event_name(papi::event_code code) {
        char event_message[PAPI_MAX_STR_LEN];
        PAPI_event_code_to_name(code, event_message);
        return std::string(event_message);
    }

    void splitting_up_args(const std::string args) {
        std::string delimiter = ",";
        size_t start = 0;
        size_t pos = args.find(delimiter);
        while (pos != std::string::npos) {
            std::string func_name = args.substr(start, pos);
            s_function_names.push_back(func_name);
            start += pos + 2;
            pos = args.substr(start).find(delimiter);
        }
        s_function_names.push_back(args.substr(start));
    }

    void pretty_printing() {
        std::stringstream sstr;
        std::string header = this->get_header_line();
        sstr << header << std::endl;

        sstr << "Benchmark";
        unsigned int space_size = this->get_longest_function_name_size() - 9 +
                                  PAPI_STR_LEN;  // -9 is length of string "Benchmark".
        std::string space = "";
        indent(space, space_size);

        for (auto event : this->event_codes) {
            std::string event_name = get_event_name(event);
            sstr << event_name;
            unsigned int event_length = event_name.size();
            space_size = PAPI_STR_LEN - event_length;
            indent(space, space_size);
        }
        sstr << std::endl;

        sstr << header << std::endl;

        unsigned int function_index = 0;
        for (std::string func_name : papi::s_function_names) {
            sstr << "\x1b[32m";
            sstr << func_name;
            space_size = this->get_longest_function_name_size() - func_name.size() + PAPI_STR_LEN;
            indent(space, space_size);
            sstr << "\x1b[0m";
            for (int i = 0; i < this->n; i++) {
                sstr << "\x1b[33m";
                sstr << this->counters[function_index][i];
                sstr << "\x1b[0m";
                unsigned int counter_length =
                    std::to_string(this->counters[function_index][i]).size();
                space_size = PAPI_STR_LEN - counter_length;
                indent(space, space_size);
            }
            function_index++;
            sstr << std::endl;
        }

        std::string out = sstr.str();
        std::cout << out;
    }

    std::vector<papi::event_code> event_codes = {{_Events...}};
    std::vector<std::vector<papi::papi_counter>> counters;

   private:
    size_t n;
};

papi::event_code register_papi(const std::vector<papi::event_code> &event_codes);

namespace logger {

enum logging_level { LOG_LEVEL_ERROR = 0, LOG_LEVEL_SUCCESS, LOG_LEVEL_INFO };

static const std::string colors[3] = {"\x1b[31m", "\x1b[37m", "\x1b[37m"};
static const std::string level_name[3] = {"PAPI ERROR", "PAPI SUCCESS", "PAPI_INFO"};

void log_papi(LOGGING_LEVEL_TYPE level, const char *format, ...);
}  // namespace logger

}  // namespace papi

#define REGISTER_PAPI(...) papi::prettypapi<__VA_ARGS__> p;

#define PAPI_START        \
    PAPI_reset(eventset); \
    PAPI_start(eventset)

#define PAPI_OVER                                                                      \
    PAPI_stop(eventset, counter);                                                      \
    std::vector<papi::papi_counter> copy(counter, counter + p.get_number_of_events()); \
    p.counters.push_back(copy)

#define PAPI_MAIN(...)                                                  \
    int main(int argc, char const *argv[]) {                            \
        papi::s_functions = {__VA_ARGS__};                              \
        p.splitting_up_args(#__VA_ARGS__);                              \
        papi::papi_counter counter[p.get_number_of_events()];           \
        papi::event_code eventset = papi::register_papi(p.event_codes); \
        for (auto func : papi::s_functions) {                           \
            func(eventset, counter);                                    \
        }                                                               \
        p.pretty_printing();                                            \
        return 0;                                                       \
    }