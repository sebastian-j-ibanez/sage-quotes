cmake_minimum_required(VERSION 3.26)

project (
    sage
    VERSION 0.1
    DESCRIPTION "A CLI tool for managing quotes."
)

include_directories(${PROJECT_SOURCE_DIR})
include_directories(include src sqlite)

add_executable(${PROJECT_NAME} src/main.cpp)