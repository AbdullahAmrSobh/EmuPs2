cmake_minimum_required(VERSION 3.0.0)
project(EmuUI VERSION 0.1.0)

add_executable(EmuUI ${PROJECT_SOURCE_DIR}/src/EmuUI.cpp ${PROJECT_SOURCE_DIR}/src/imgui_impl_glfw.h ${PROJECT_SOURCE_DIR}/src/imgui_impl_glfw.cpp ${PROJECT_SOURCE_DIR}/src/imgui_impl_opengl3.h ${PROJECT_SOURCE_DIR}/src/imgui_impl_opengl3.cpp)


find_package(OpenGL REQUIRED)
target_link_libraries(EmuUI ${OPENGL_LIBRARIES})

target_link_libraries(EmuUI spdlog)

target_link_libraries(EmuUI glfw)

target_link_libraries(EmuUI GLAD)

target_link_libraries(EmuUI imgui)

target_link_libraries(EmuUI EmuCore) 
