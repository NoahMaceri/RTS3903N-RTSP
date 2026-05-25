cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(settings_tool
    ${CMAKE_CURRENT_SOURCE_DIR}/settings_tool.cpp
)
