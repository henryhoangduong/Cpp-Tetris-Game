cmake_minimum_required(VERSION 3.10)
project(RaylibProject)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Homebrew path for Apple Silicon
set(RAYLIB_PATH /opt/homebrew)

# Include and link directories
include_directories(${RAYLIB_PATH}/include)
link_directories(${RAYLIB_PATH}/lib)

# Add the source directory and create the executable
add_executable(RaylibApp src/main.cpp)

# Link against raylib and OpenGL frameworks
target_link_libraries(RaylibApp
    raylib
    -framework OpenGL
    -framework Cocoa
    -framework IOKit
    -framework CoreVideo    # Optional, might help with macOS
)

