project(ApplicationTest)

add_subdirectory(lib/googletest-release-1.8.0)

add_executable(application_test
        application_test.cpp)

target_link_libraries(application_test gtest_main gmock_main)
