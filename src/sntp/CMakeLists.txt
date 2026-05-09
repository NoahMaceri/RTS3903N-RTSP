cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Tiny SNTP client. No external dependencies — just libc.
add_executable(sntp ${CMAKE_CURRENT_SOURCE_DIR}/sntp.cpp)
