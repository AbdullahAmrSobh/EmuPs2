cmake_minimum_required(VERSION 3.0.0)
project(imgui VERSION 0.1.0)

add_library(imgui STATIC ${PROJECT_SOURCE_DIR}/imgui/imconfig.h
                         ${PROJECT_SOURCE_DIR}/imgui/imgui.h
                         ${PROJECT_SOURCE_DIR}/imgui/imgui.cpp
                         ${PROJECT_SOURCE_DIR}/imgui/imgui_draw.cpp
                         ${PROJECT_SOURCE_DIR}/imgui/imgui_internal.h
                         ${PROJECT_SOURCE_DIR}/imgui/imgui_widgets.cpp
                         ${PROJECT_SOURCE_DIR}/imgui/imstb_rectpack.h
                         ${PROJECT_SOURCE_DIR}/imgui/imstb_textedit.h
                         ${PROJECT_SOURCE_DIR}/imgui/imstb_truetype.h
                         ${PROJECT_SOURCE_DIR}/imgui/imgui_demo.cpp
                         )


target_include_directories(imgui PUBLIC ${PROJECT_SOURCE_DIR}/imgui)