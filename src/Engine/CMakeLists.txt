set(ENGINE_SRCS Engine.cpp)
add_library(Engine ${ENGINE_SRCS})
target_link_libraries(Engine PUBLIC external)