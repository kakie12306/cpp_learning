file(GLOB SRC *.h *.cpp)

add_library(hello SHARED ${SRC})

