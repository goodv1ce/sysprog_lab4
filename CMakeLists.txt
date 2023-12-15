cmake_minimum_required(VERSION 3.10)
project(calculator_project)

set(CMAKE_CXX_STANDARD 11)

# Add the library target
add_library(calculator_lib STATIC calculator.cpp)

# Add the executable target
add_executable(calculator_app main.cpp)

# Link the executable with the library
target_link_libraries(calculator_app calculator_lib)

# Generate Ninja build script
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
