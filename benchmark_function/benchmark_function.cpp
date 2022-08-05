#include "benchmark_function.hpp"

#include <random>

/**
 * @brief Initializes a vector with n random numbers between 0 and 255.
 *
 * @param vec Vector that gets filled with random numbers.
 * @param n Number of elements we insert into vec.
 */
void initialize_vector(std::vector<double> &vec, size_t n) {
    std::uniform_real_distribution<double> unif(0, 255);
    std::default_random_engine re;
    for (int i = 0; i < n; i++) {
        vec.push_back(unif(re));
    }
}

/**
 * @brief Straightforward summation of a vector.
 *
 * @param vec Elements in this vector got summed up.
 * @return double. Result of sum of vec.
 */
double reduction_naive(std::vector<double> &vec) {
    double sum = 0.;
    for (double elem : vec) {
        sum += elem;
    }

    return sum;
}

/**
 * @brief Same function as reduction_naive but faster. This specific
 * implementation takes a hardware into account that has 2 parallel ports with
 * floating point adders, with throughput of 1 issue/cycle on each of the two
 * ports and a latency of 4 cycles (Kaby Lake Microarchitecture). Please note
 * that a different microarchitecutre has a different optimal number of
 * accumulators.
 *
 * @param vec Elements in this vector got summed up.
 * @return double. Rsult of sum of vec.
 */
double reduction_opt(std::vector<double> &vec) {
    double t0 = 0, t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0;
    size_t i;
    size_t n = vec.size();
    for (i = 0; i < n - 8; i += 8) {
        t0 += vec[i];
        t1 += vec[i + 1];
        t2 += vec[i + 2];
        t3 += vec[i + 3];
        t4 += vec[i + 4];
        t5 += vec[i + 5];
        t6 += vec[i + 6];
        t7 += vec[i + 7];
    }

    double sum = t0 + t1 + t2 + t3 + t4 + t5 + t6 + t7;

    for (; i < n; i++) {
        sum += vec[i];
    }

    return sum;
}