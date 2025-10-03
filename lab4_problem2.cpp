#include "lab4_problem2.h"
#include <cstring>  
#include <cstdlib>  

char* echo(char* str) {
    if (str == nullptr) return nullptr;

    int len = std::strlen(str);
    int totalLen = len * (len + 1) / 2;

    char* result = (char*) std::malloc(totalLen + 1); 
    if (result == nullptr) return nullptr;

    int pos = 0;
    for (int i = 0; i < len; ++i) {
        for (int j = i; j < len; ++j) {
            result[pos++] = str[j];
        }
    }

    result[pos] = '\0';
    return result;
}

