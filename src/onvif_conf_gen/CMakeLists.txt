cmake_minimum_required(VERSION 3.10)

# onvif_conf_gen — boot-time INI generator. Reads our settings.json and writes
# /var/tmp/sd/onvif/onvif.conf so settings.json stays the single source of
# truth (the user keeps editing one file rather than two).
add_executable(onvif_conf_gen ${CMAKE_CURRENT_SOURCE_DIR}/onvif_conf_gen.cpp)
target_compile_options(onvif_conf_gen PRIVATE -Os)
