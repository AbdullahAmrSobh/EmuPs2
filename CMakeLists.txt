cmake_minimum_required(VERSION 3.0.0)
project(EmuPs2 VERSION 0.1.0)

# project thirdpparty libraries

add_subdirectory(${CMAKE_SOURCE_DIR}/Thirdparty/spdlog)

set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "GLFW lib only")
set(GLFW_BUILD_TESTS OFF CACHE BOOL "GLFW lib only")
set(GLFW_BUILD_DOCS OFF CACHE BOOL "GLFW lib only")
set(GLFW_BUILD_INSTALL OFF CACHE BOOL "GLFW lib only")
add_subdirectory(${CMAKE_SOURCE_DIR}/Thirdparty/glfw)

add_subdirectory(${CMAKE_SOURCE_DIR}/Thirdparty/GLAD)

add_subdirectory(${CMAKE_SOURCE_DIR}/Thirdparty/imgui)

add_subdirectory(${CMAKE_SOURCE_DIR}/EmuCore)
add_subdirectory(${CMAKE_SOURCE_DIR}/EmuUI)
