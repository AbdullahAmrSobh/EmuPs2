cmake_minimum_required(VERSION 3.0.0)
project(imgui VERSION 0.1.0)

add_library(imgui STATIC ${PROJECT_SOURCE_DIR}/imgui/imgui_demo.cpp
                         ${PROJECT_SOURCE_DIR}/imgui/imgui_draw.cpp
                         ${PROJECT_SOURCE_DIR}/imgui/imgui_tables.cpp
                         ${PROJECT_SOURCE_DIR}/imgui/imgui_widgets.cpp
                         ${PROJECT_SOURCE_DIR}/imgui/imgui.cpp
                         ${PROJECT_SOURCE_DIR}/imgui/imgui.cpp
                         ${PROJECT_SOURCE_DIR}/imgui/backends/imgui_impl_glfw.cpp
                         ${PROJECT_SOURCE_DIR}/imgui/backends/imgui_impl_opengl3.cpp
                         )

target_include_directories(GLAD PUBLIC ${PROJECT_SOURCE_DIR}/imgui)
target_include_directories(GLAD PUBLIC ${PROJECT_SOURCE_DIR}/backends)