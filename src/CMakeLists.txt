add_subdirectory(Engine)

add_library(IceGE INTERFACE)
target_include_directories(Engine PUBLIC ${ICEGE_INCLUDE_DIR}/Engine)
target_link_libraries(IceGE INTERFACE Engine)