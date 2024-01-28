cmake_minimum_required(VERSION 3.15)
project(cmake_test01)
set(CMAKE_CXX_STANDARD 11)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)
set(SRC_LIST src/main.cpp)

add_executable(cmake_test01 ${SRC_LIST})
target_include_directories(cmake_test01 PRIVATE src/hello_world)
target_link_libraries(cmake_test01 hello_world)

add_subdirectory(src/hello_world)