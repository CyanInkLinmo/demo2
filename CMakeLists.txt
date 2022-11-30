# 父目录下的CMakeLists.txt
cmake_minimum_required(VERSION 3.10.2)
project(test)

include_directories(src/sub)

add_subdirectory(src/sub output) 

add_executable(test src/main.cpp)

target_link_libraries(test sub)