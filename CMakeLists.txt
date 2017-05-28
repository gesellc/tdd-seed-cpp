cmake_minimum_required(VERSION 3.1)
project(ApplicationMain)

#add_definitions(-std=c++11)

set(SOURCE_FILES main.cpp)
add_executable(application_main ${SOURCE_FILES})

include_directories(
        . # to be able to make google style includes
)

add_subdirectory(test)
add_subdirectory(source)

target_link_libraries(application_main application)
