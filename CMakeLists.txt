cmake_minimum_required(VERSION 3.24)

project(silence_missing_function_warnings C)

add_library(${PROJECT_NAME} "")
target_sources(${PROJECT_NAME}
    PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/silence_missing_function_warnings.c
)

target_include_directories(${PROJECT_NAME}
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}
)
