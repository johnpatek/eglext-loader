cmake_minimum_required(VERSION 3.0)

project(eglext-loader)

find_package(PkgConfig REQUIRED)
pkg_search_module(EGL REQUIRED IMPORTED_TARGET egl)
#pkg_search_module(PNG REQUIRED IMPORTED_TARGET libpng)
#pkg_search_module(GLES2 REQUIRED IMPORTED_TARGET glesv2)

#add_executable(test main.c eglext_loader.h eglext_loader.c)

#target_include_directories(test PRIVATE /usr/local/cuda/include)

#target_link_directories(test PRIVATE /usr/local/cuda/lib64)

add_library(eglextloader SHARED eglext_loader.c)

target_include_directories(eglextloader PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(eglextloader PkgConfig::EGL)# PkgConfig::PNG PkgConfig::GLES2 cudart)