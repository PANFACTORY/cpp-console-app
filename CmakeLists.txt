cmake_minimum_required(VERSION 3.26)

project(cpp_console_app_test CXX)

include(FetchContent)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/refs/tags/release-1.12.0.zip
)
FetchContent_MakeAvailable(googletest)
enable_testing()

file(GLOB MY_SOURCE test/*.cpp)
add_executable(CppConsoleAppTest ${MY_SOURCE})
target_link_libraries(CppConsoleAppTest gtest_main)

include(GoogleTest)
gtest_discover_tests(CppConsoleAppTest)