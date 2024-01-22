cmake_minimum_required(VERSION 3.28.1)
project(RGE VERSION 0.0.1)

set(CMAKE_CXX_STANDARD 17)

file(GLOB_RECURSE SOURCE_FILES src/*.cpp)
add_executable(RGE ${SOURCE_FILES})

target_include_directories(RGE PUBLIC include)

add_subdirectory(glfw-3.3.9)
target_link_libraries(RGE glfw)