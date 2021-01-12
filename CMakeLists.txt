cmake_minimum_required(VERSION 3.5)

set(VERSION 1.0.0)

project(hello VERSION ${VERSION} LANGUAGES C)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)

add_subdirectory(src)
