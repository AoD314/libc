
add_subdirectory(libaa)

add_library(liba SHARED liba.c)
target_link_libraries(liba PRIVATE libaa)
target_include_directories(liba PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
