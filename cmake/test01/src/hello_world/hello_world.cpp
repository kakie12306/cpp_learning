#include <iostream>
#include "hello_world.h"
#include "hello.h"

void PrintHelloWorld(void) {
    std::cout << "Hello World!" << std::endl;
    PrintHello();
}