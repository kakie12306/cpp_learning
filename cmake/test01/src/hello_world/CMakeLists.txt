file(GLOB SRC *.h *.cpp)

add_library(hello_world SHARED ${SRC})
target_include_directories(hello_world PRIVATE hello)
target_link_libraries(hello_world hello)

add_subdirectory(hello)