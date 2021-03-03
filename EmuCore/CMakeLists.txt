cmake_minimum_required(VERSION 3.0.0)
project(EmuCore VERSION 0.1.0)

add_library(EmuCore STATIC ${PROJECT_SOURCE_DIR}/src/core/Emulator.cpp)

target_include_directories(EmuCore PUBLIC ${PROJECT_SOURCE_DIR}/src)

target_precompile_headers(EmuCore PRIVATE ${PROJECT_SOURCE_DIR}/src/emupch.h)