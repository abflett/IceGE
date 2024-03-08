cmake_minimum_required(VERSION 3.28)
project(IceGE)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_INCLUDE_DIRS ${CMAKE_CURRENT_SOURCE_DIR}/include)

set(ICEGE_SRCS src/IceGE/Engine.cpp)

add_subdirectory(external) # includes SDL and other external libs as INTERFACE lib

add_library(IceGE ${ICEGE_SRCS})
target_include_directories(IceGE PUBLIC ${CMAKE_INCLUDE_DIRS})

target_link_libraries(IceGE PUBLIC external)