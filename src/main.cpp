//父目录下的main.cpp
#include "test.h"
#include <iostream>

int main(int argc, char** argv)
{
    std::cout << "In main..." << std::endl;
    test("hello, world!");
    system("pause");
    return 0;
}