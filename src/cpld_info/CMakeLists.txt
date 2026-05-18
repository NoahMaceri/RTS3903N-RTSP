cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Diagnostic one-shot: decodes cpld_periph.ko's modprobe wiring strings.
# No external dependencies — just libc.
add_executable(cpld_info ${CMAKE_CURRENT_SOURCE_DIR}/cpld_info.cpp)
target_include_directories(cpld_info PRIVATE ${CMAKE_SOURCE_DIR}/src/common)
