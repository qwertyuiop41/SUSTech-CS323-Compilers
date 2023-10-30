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
        case MISS_EXP:{
            if (content!=' ')
            {
                printf("Error type B at Line %d: Missing Exp after %c\n", line_num,content);
            }
            else
            {
                printf("Error type B at Line %d: Missing Exp\n", line_num);
            }
            break;
            
        }
        case MISS_VAR:{
            printf("Error type B at Line %d: Missing variable\n", line_num);
            break;
        }
        case MISS_ARG:{
            printf("Error type B at Line %d: Missing arg\n", line_num);
            break;
        }
        case MISS_FIELD:{
            printf("Error type B at Line %d: Missing field\n", line_num);
            break;
        }
        case MISS_IF:{
            printf("Error type B at Line %d: no 'if' before 'else'\n", line_num);
            break;
        }
    }
    
}
   