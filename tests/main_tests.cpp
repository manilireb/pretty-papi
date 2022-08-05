#include <gtest/gtest.h>

#include "benchmark_function.hpp"
#include "prettypapi.hpp"

int main(int argc, char const *argv[]) {
    papi_info("Welcome to the testing utility!");

    ::testing::InitGoogleTest();
    int r_code = RUN_ALL_TESTS();

    return r_code;
}

TEST(SelfTest, SanityCheck) { ASSERT_TRUE(true); }

TEST(LoggingTest, Output1) {
    papi_info("line 1");
    papi_success("line 2");
    papi_error("line 3");

    SUCCEED();
}

TEST(UNIT_TEST, test_equal_result) {
    std::vector<double> vec;
    initialize_vector(vec, 5000);
    double res1 = reduction_naive(vec);
    double res2 = reduction_opt(vec);

    EXPECT_DOUBLE_EQ(res1, res2);
}
