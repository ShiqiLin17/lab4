#include "lab4_problem1.h"

int cstrlen(char* str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

