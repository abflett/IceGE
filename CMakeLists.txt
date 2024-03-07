cmake_minimum_required(VERSION 3.28)
project(IceGE)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# set(SDL_TEST OFF)
# set(BUILD_SHARED_LIBS OFF)

set(CMAKE_INCLUDE_DIRS ${CMAKE_CURRENT_SOURCE_DIR}/include)

set(ICEGE_SRCS src/IceGE/Engine.cpp)

add_subdirectory(external)  # Assuming SDL subdirectory exists

# Create the IceGE library (SHARED recommended for better modularity)
add_library(IceGE SHARED ${ICEGE_SRCS})
target_include_directories(IceGE PUBLIC ${CMAKE_INCLUDE_DIRS})

# Implement your IceGE library code in Engine.cpp

# Link with SDL within the IceGE library
# add_subdirectory(external/SDL)
target_link_libraries(IceGE PRIVATE external)

# Create the interface library for IceGE
add_library(IceGELib INTERFACE)
target_link_libraries(IceGELib INTERFACE IceGE)