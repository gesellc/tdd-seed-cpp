project(bankingApplication_tests)

add_subdirectory(lib/googletest-release-1.8.0)

include_directories(
        ${gtest_SOURCE_DIR}/include
        ${gtest_SOURCE_DIR}
)

add_executable(run_bankingApplication_tests
        application_test.cpp)

target_link_libraries(run_bankingApplication_tests gtest gtest_main gmock gmock_main)
