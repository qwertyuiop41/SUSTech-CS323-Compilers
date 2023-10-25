#include "my_error.hpp"

using namespace std;

void my_error(MY_ERROR_TYPE type, int line_num, char content) {
    switch (type) {
        case MISS_SEMI: {
            printf("Error type B at Line %d: Missing semicolon \';\'\n", line_num);
            break;
        }
        case MISS_PAREMTHESIS: {
            printf("Error type B at Line %d: Missing closing parenthesis \'%c\'\n", line_num,content);
            break;
        }
        case MISS_BRACKET: {
            printf("Error type B at Line %d: Missing closing square bracket \'%c\'\n", line_num,content);
            break;
        }
        case MISS_CURLY_BRACE: {
            printf("Error type B at Line %d: Missing closing brace \'%c\'\n", line_num,content);
            break;
        }
        case MISS_SPEC: {
            printf("Error type B at Line %d: Missing specifier\n", line_num);
            break;
        }
    }
    
}
   