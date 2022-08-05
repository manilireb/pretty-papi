#include "prettypapi.hpp"

void papi::logger::log_papi(LOGGING_LEVEL_TYPE level, const char *format, ...) {
    va_list args;
    va_start(args, format);
    size_t len = std::vsnprintf(NULL, 0, format, args);
    va_end(args);
    char msg[len + 1];
    va_start(args, format);
    std::vsnprintf(msg, len + 1, format, args);

    std::stringstream sstr;

    sstr << LOGGING_LEVEL_COLOR[level];
    std::time_t tt = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
    struct std::tm *now = std::localtime(&tt);
    sstr << std::put_time(now, "[%F %T][") << LOGGING_LEVEL_NAME[level] << "] " << msg;
    sstr << std::endl;
    sstr << "\x1b[0m";
    std::string out_msg = sstr.str();
    std::cout << out_msg;
}

papi::event_code papi::register_papi(const std::vector<papi::event_code> &event_codes) {
    int retval;
    papi::event_code eventset = PAPI_NULL;
    retval = PAPI_library_init(PAPI_VER_CURRENT);
    if (retval != PAPI_VER_CURRENT)
        papi_error("Initializing PAPI didn't work!");
    else
        papi_success("Successfully initialized PAPI.");
    retval = PAPI_create_eventset(&eventset);
    if (retval != PAPI_OK)
        papi_error("Creating eventset didn't work!");
    else
        papi_success("Successfully created eventset.");

    for (papi::event_code event : event_codes) {
        retval = PAPI_add_event(eventset, event);
        char eventname[PAPI_MAX_STR_LEN];
        PAPI_event_code_to_name(event, eventname);
        if (retval != PAPI_OK)
            papi_error("Error when adding %s to eventset.", eventname);
        else
            papi_success("Successfully added %s to eventset.", eventname);
    }

    return eventset;
}
