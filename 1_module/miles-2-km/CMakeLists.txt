cmake_minimum_required(VERSION 3.10)
project(miles2km)

# Set the C standard to C11
set(CMAKE_C_STANDARD 11)

# Add the executable target
add_executable(miles2km miles2km.c)

# Enable compile commands generation
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)