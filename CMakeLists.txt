cmake_minimum_required(VERSION 3.28)
project(IceGE)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(SDL_TEST OFF)
set(BUILD_SHARED_LIBS OFF)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

set(GAME_ENGINE_SRCS
    src/IceGE/Engine.cpp
)

add_subdirectory(external/SDL/SDL)

add_library(IceGE STATIC ${GAME_ENGINE_SRCS})

target_link_libraries(IceGE PRIVATE SDL3::SDL3)