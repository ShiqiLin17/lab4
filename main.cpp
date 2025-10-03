#include <iostream>
#include "lab4_problem1.h"
#include "lab4_problem2.h"
#include <cstdlib>  // for free()

int main() {
    char testStr[] = "hello";

    int length = cstrlen(testStr);
    std::cout << "Length of \"" << testStr << "\": " << length << std::endl;

    char* echoed = echo(testStr);
    std::cout << "Echoed string: " << echoed << std::endl;

    std::free(echoed);

    return 0;
}

