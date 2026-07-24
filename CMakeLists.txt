cmake_minimum_required(VERSION 3.20)

project(nds-emulator
    VERSION 0.1.0
    DESCRIPTION "An open-source Nintendo DS emulator written in C++"
    LANGUAGES CXX
)

# Use modern C++
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Create the emulator executable
add_executable(nds-emulator
    src/main.cpp
    src/emulator.cpp

    # CPU
    src/cpu/arm9.cpp
    src/cpu/arm7.cpp

    # Memory
    src/memory/memory.cpp

    # Cartridge
    src/cartridge/cartridge.cpp

    # Video
    src/video/video.cpp
)

# Allow source files to include headers from src/
target_include_directories(nds-emulator
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/src
)

# Compiler warnings
if(MSVC)
    target_compile_options(nds-emulator PRIVATE /W4)
else()
    target_compile_options(nds-emulator PRIVATE
        -Wall
        -Wextra
        -Wpedantic
    )
endif()
