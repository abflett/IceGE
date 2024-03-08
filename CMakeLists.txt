cmake_minimum_required(VERSION 3.28)
project(IceGE)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(ICEGE_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/include)

add_subdirectory(external)
add_subdirectory(src)

# install(TARGETS IceGE DESTINATION lib)
# install(DIRECTORY ${ICEGE_INCLUDE_DIR} DESTINATION test)