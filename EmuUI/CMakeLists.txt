cmake_minimum_required(VERSION 3.0.0)
project(EmuUI VERSION 0.1.0)

add_executable(EmuUI ${PROJECT_SOURCE_DIR}/src/EmuUI.cpp)

target_link_libraries(EmuUI EmuCore)