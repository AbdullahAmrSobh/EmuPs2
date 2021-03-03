cmake_minimum_required(VERSION 3.0.0)
project(EmuPs2 VERSION 0.1.0)

#project thirdpparty libraries

add_subdirectory(${CMAKE_SOURCE_DIR}/Thirdparty/spdlog)
add_subdirectory(${CMAKE_SOURCE_DIR}/Thirdparty/GLFW)
add_subdirectory(${CMAKE_SOURCE_DIR}/Thirdparty/glad)
add_subdirectory(${CMAKE_SOURCE_DIR}/Thirdparty/imgui)

add_subdirectory(${CMAKE_SOURCE_DIR}/EmuCore)
add_subdirectory(${CMAKE_SOURCE_DIR}/EmuUI)
