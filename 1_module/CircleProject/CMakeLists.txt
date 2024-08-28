cmake_minimum_required(VERSION 3.10)
project(CircleProject)

# Enable compile commands generation
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Set the C standard (optional)
set(CMAKE_C_STANDARD 11)

# Add the executable target, adjust the path to circle.c as needed
add_executable(circle ../circle.c)
