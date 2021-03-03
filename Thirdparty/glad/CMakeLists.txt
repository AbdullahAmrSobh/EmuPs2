cmake_minimum_required(VERSION 3.0.0)
project(GLAD VERSION 0.1.0)

add_library(GLAD STATIC ${PROJECT_SOURCE_DIR}/src/glad.c)

target_include_directories(GLAD PUBLIC ${PROJECT_SOURCE_DIR}/include)