cmake_minimum_required(VERSION 3.10)

project(snapshot_server)

add_executable(snapshot ${CMAKE_CURRENT_SOURCE_DIR}/snapshot_server.cpp)

# No external dependencies needed - just uses Unix sockets
