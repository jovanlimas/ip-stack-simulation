cmake_minimum_required(VERSION 3.10)

# Project name
project(ip_stack_simulation)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories
include_directories(${CMAKE_SOURCE_DIR}/layers)

# Source files
set(SOURCES
    ip-stack.cpp
    main.cpp
    packet.cpp
    layers/application.cpp
    layers/link.cpp
    layers/network.cpp
    layers/transport.cpp
)

# Header files
set(HEADERS
    ip-stack.hpp
    packet.hpp
    layers/application.hpp
    layers/link.hpp
    layers/network.hpp
    layers/transport.hpp
)

# Add executable
add_executable(ip_stack_simulation ${SOURCES} ${HEADERS})

# Output directory for compiled files
set_target_properties(ip_stack_simulation PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin
)
