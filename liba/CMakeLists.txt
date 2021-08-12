
add_subdirectory(libaa)

add_library(liba SHARED liba.c)
target_link_libraries(liba PUBLIC libaa)
target_include_directories(liba PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
