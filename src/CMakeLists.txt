add_subdirectory(Engine)

add_library(IceGE INTERFACE)

target_link_libraries(IceGE INTERFACE Engine)