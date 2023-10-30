#ifndef MYERROR_HPP
#define MYERROR_HPP

#include <string>
#include <iostream>
using namespace std;

typedef enum {
    MISS_SEMI,  
    MISS_PAREMTHESIS, 
    MISS_BRACKET,
    MISS_CURLY_BRACE,
    MISS_SPEC,
    MISS_EXP,
    MISS_VAR,
    MISS_ARG,
    MISS_FIELD,
    MISS_IF
} MY_ERROR_TYPE;

void my_error(MY_ERROR_TYPE type, int line_num,char content=' ');

#endif 
