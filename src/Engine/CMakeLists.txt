set(ENGINE_SRCS Engine.cpp)

add_library(Engine ${ENGINE_SRCS})
target_include_directories(Engine PUBLIC ${ICEGE_INCLUDE_DIR})
target_link_libraries(Engine PUBLIC external)