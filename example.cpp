#include "benchmark_function.hpp"
#include "prettypapi.hpp"

#define VEC_SIZE 3200

REGISTER_PAPI(PAPI_TOT_CYC, PAPI_L1_TCM);

void BM_reduction_naive(papi::event_code eventset, papi::papi_counter *counter) {
    std::vector<double> vec;
    initialize_vector(vec, VEC_SIZE);

    PAPI_START;
    { double sum = reduction_naive(vec); }
    PAPI_OVER;
}

void BM_reduction_opt(papi::event_code eventset, papi::papi_counter *counter) {
    std::vector<double> vec;
    initialize_vector(vec, VEC_SIZE);

    PAPI_START;
    { double sum = reduction_opt(vec); }
    PAPI_OVER;
}

PAPI_MAIN(BM_reduction_naive, BM_reduction_opt);