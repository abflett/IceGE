cmake_minimum_required(VERSION 3.28)
project(IceGE)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(GAME_ENGINE_SRCS
    src/IceGE/Engine.cpp
)

# include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

add_subdirectory(external)
add_library(IceGE STATIC ${GAME_ENGINE_SRCS})
target_include_directories(IceGE PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries(IceGE PRIVATE external)

add_library(IceGELib INTERFACE)
target_link_libraries(IceGELib INTERFACE IceGE)