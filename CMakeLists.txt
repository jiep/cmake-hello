cmake_minimum_required(VERSION 3.5)

project(hello)

add_executable(hello hello-world.c)

install(TARGETS hello DESTINATION bin)
