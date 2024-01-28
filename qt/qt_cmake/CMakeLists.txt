cmake_minimum_required(VERSION 3.15)
project(qt_cmake LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)

find_package(Qt5 COMPONENTS Core Gui Widgets REQUIRED)

set(SRC_LIST src/main.cpp)
add_executable(${PROJECT_NAME} ${SRC_LIST})
target_link_libraries(${PROJECT_NAME} Qt5::Core Qt5::Gui Qt5::Widgets)