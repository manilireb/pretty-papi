cmake_minimum_required(VERSION 3.0.0)
project(PrettyPapi VERSION 0.1.0)

# Google Test
include(FetchContent)

FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/benchmark_function)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/lib/papi)
link_directories(${CMAKE_CURRENT_SOURCE_DIR}/lib/papi)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_executable(testing tests/main_tests.cpp prettypapi.cpp benchmark_function/benchmark_function.cpp)

target_link_libraries(testing gtest_main)

target_include_directories(testing PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries(testing papi pfm)

include(GoogleTest)
gtest_discover_tests(testing)

# end Google Test
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/benchmark_function)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/lib/papi)
link_directories(${CMAKE_CURRENT_SOURCE_DIR}/lib/papi)

add_executable(PrettyPapi example.cpp prettypapi.cpp benchmark_function/benchmark_function.cpp)

target_include_directories(PrettyPapi PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries(PrettyPapi papi pfm)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
