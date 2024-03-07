cmake_minimum_required(VERSION 3.28)
project(IceGE)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)  # Ensures standard-conforming code

# Include directories (Adjust based on submodule usage)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)  # Include main header directory

# Define source files
set(GAME_ENGINE_SRCS
    src/IceGE/IceGE.cpp  # Assuming the source file is in src/IceGE
    # Other source files for your game engine
)

# Create the game engine library
add_library(IceGE STATIC ${GAME_ENGINE_SRCS})  # Library name should match project name

# Handle external dependencies
# add_subdirectory(external)
# target_link_libraries(IceGE PRIVATE external)  # Link external to the library
