
add_compile_options(-fPIC)
add_library(libaa STATIC libaa.c)
target_include_directories(libaa PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
