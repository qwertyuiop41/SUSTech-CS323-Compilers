%{
    #define YYSTYPE char *
    #include "lex.yy.c"
    int yyerror(char* s);
    int ipv4_DOT;
    int ipv6_COLON;
%}

%token X
%token DOT
%token COLON

%%

// please design a grammar for the valid ip addresses and provide necessary semantic actions for production rules
Calc: /* to allow empty input */
    | Factor 
    {
        if(ipv4_DOT==3){
            printf("IPV4: %s\n", $1);
        }else if(ipv6_COLON==7){
            printf("IPV6: %s\n", $1);
        }
    }
    ;
Factor: Term
    {
        if(strlen($1)>1 & $1[0]=='0'){
            printf("%s\n", "Contain leading 0");
            yyerror("error");
        }
    }
    | Factor DOT Term 
    {
        if (strchr($1, '.') == NULL && strchr($1, ':') == NULL) {
            int x1=atoi($1);
            if ( x1<0|x1>255){
                printf("%s\n", "Integer in ipv4 out of range");
                yyerror("error");
            }
        }
        if(strlen($3)>1 & $3[0]=='0'){
            printf("%s\n", "Contain leading 0");
            yyerror("error");
        }
        int x3=atoi($3);
        if ( x3<0|x3>255){
            printf("%s\n", "Integer in ipv4 out of range");
            yyerror("error");
        }
        $$ = strcat($1,"\.");
        $$ = strcat($$,$3);
        ipv4_DOT+=1;
    }
    | Factor COLON Term 
    {
        if (strchr($1, '.') == NULL && strchr($1, ':') == NULL) {
            if ( strlen($1)<1|strlen($1)>4){
                printf("%s\n", "The length of integer in ipv6 out of range");
                yyerror("error");
            }
        }
            if ( strlen($3)<1|strlen($3)>4){
                printf("%s\n", "The length of integer in ipv6 out of range");
                yyerror("error");
            }
        $$ = strcat($1,":");
        $$ = strcat($$,$3);
        ipv6_COLON+=1;
    }
    ;
Term: X {
    if (yyleng>4){
        printf("%s\n", "Length Error");
        yyerror("error");
    }
    }
    ;
%%

int yyerror(char* s) {
    fprintf(stderr, "%s\n", "Invalid");
    exit(1);
    return 1;
}
int main() {
    ipv4_DOT=0;
    ipv6_COLON=0;
    yyparse();
}
