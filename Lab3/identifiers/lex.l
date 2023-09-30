%{
    #include <stdio.h>
    #include <string.h>

    #define EXIT_OK 0
    #define EXIT_FAIL 1

    // Global variables
    int identifiers = 0;
    int lines = 1;

    char* reserved_words[] = {"char", "int", "return", "while", "if", "else"};
%}

letter [a-zA-Z]
letter_ {letter}|_
digit [0-9]
hao ['"]
le {hao}|{digit}
res {letter_}|{digit}
p [(){}]

%%
{p}  {
}

{le}{res}*  {

}

{letter_}{res}*  {
    int is_reserved = 0;
    for (int i = 0; i < sizeof(reserved_words) / sizeof(reserved_words[0]); i++) {
        if (strcmp(yytext, reserved_words[i]) == 0) {
            is_reserved = 1;
            break;
        }
    }

    if (!is_reserved) {
        identifiers++;
        printf("line %d: %s\n", lines, yytext);
    }
}



\n { lines++; }
[\t\r ]+ { /* does nothing when seeing white spaces except new line */ }
. { /* a final rule that matches when seeing any character but new line */ }
<<EOF>> { printf("There are %d occurrences of valid identifiers\n", identifiers); yyterminate(); }

%%
int main(int argc, char **argv){
    char *file_path;
    if(argc < 2){
        fprintf(stderr, "Usage: %s <file_path>\n", argv[0]);
        return EXIT_FAIL;
    } else if(argc == 2){
        file_path = argv[1];
        if(!(yyin = fopen(file_path, "r"))){
            perror(argv[1]);
            return EXIT_FAIL;
        }
        yylex();
        return EXIT_OK;
    } else{
        fputs("Too many arguments! Expected: 2.\n", stderr);
        return EXIT_FAIL;
    }
}

