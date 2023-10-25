%{
    #include "tree.hpp"
    #include "lex.yy.c"
    #include <stdio.h>
    #include "stdlib.h"
    #include <string.h>
    #include "my_error.hpp"
    void yyerror(const char* s);
    int has_error=0;
%}
%locations

/* declared types */
%union{
    Node* node_ptr;
}

/* declared tokens */
%nonassoc <node_ptr> ILLEGAL_TOKEN
%nonassoc LOWER_THAN_ELSE
%nonassoc <node_ptr> ELSE

%token <node_ptr> TYPE INT CHAR FLOAT STRUCT ID
%token <node_ptr> IF WHILE RETURN

%token<node_ptr> COMMA

%right <node_ptr> ASSIGN


%left <node_ptr> OR
%left <node_ptr> AND
%left <node_ptr> LT LE GT GE NE EQ 
%left <node_ptr> PLUS MINUS 
%left <node_ptr> MUL DIV 
%right <node_ptr> NOT
%left <node_ptr> DOT LP RP LB RB 

%token <node_ptr> SEMI LC RC 

/*ERROR*/
%token <node_ptr> INVALID_CHAR WRONG_ID UNKNOWN_CHAR INVALID_NUMBER 

/* declared non-terminal */
%type <node_ptr> Program ExtDefList ExtDef ExtDecList
%type <node_ptr> Specifier StructSpecifier 
%type <node_ptr> VarDec FunDec VarList ParamDec CompSt StmtList
%type <node_ptr> Stmt DefList Def DecList Dec Exp Args

%%
/* high-level definition */
Program : ExtDefList 
    {
        /*@$.first_line is to get the starting line number of the current convention symbol*/
        $$ = new Node(NONTERMINAL, "Program", 1, @$.first_line, $1); 
        if(has_error == 0) {
            printTree($$, 0);
        }
    }
;

ExtDefList : /* allow empty input */  
    {
        $$ = new Node(NONTERMINAL, "ExtDefList", 0, @$.first_line);
    }
    | ExtDef ExtDefList 
    {
        $$ = new Node(NONTERMINAL, "ExtDefList", 2, @$.first_line, $1, $2);
    }
;

ExtDef : Specifier ExtDecList SEMI  /* eg.int global1, global2;*/
    {
        $$=new Node(NONTERMINAL, "ExtDef", 3, @$.first_line, $1, $2, $3);
    }
    | Specifier SEMI /* eg.struct {…};*/
    {   
        $$=new Node(NONTERMINAL, "ExtDef", 2, @$.first_line, $1, $2);
    }
    | Specifier FunDec CompSt /* CompSt:function body*/
    {
        $$=new Node(NONTERMINAL, "ExtDef", 3, @$.first_line, $1, $2, $3);
    }
    | Specifier ExtDecList error 
    {
        my_error(MISS_SEMI, @$.first_line);
        has_error=1;
    }
    | Specifier error 
    {
        my_error(MISS_SEMI, @$.first_line);
        has_error=1;
    }
    | error ExtDecList SEMI  /* eg.int global1, global2;*/
    {
        my_error(MISS_SPEC, @$.first_line);
        has_error=1;
    }
    | error SEMI /* eg.struct {…};*/
    {   
        my_error(MISS_SPEC, @$.first_line);
        has_error=1;
    }
    | error FunDec CompSt /* CompSt:function body*/
    {
        my_error(MISS_SPEC, @$.first_line);
        has_error=1;
    }
;

ExtDecList: VarDec 
    {
        $$=new Node(NONTERMINAL, "ExtDecList", 1, @$.first_line, $1);
    }
    | VarDec COMMA ExtDecList 
    {
        $$=new Node(NONTERMINAL, "ExtDecList", 3, @$.first_line, $1, $2, $3);
    }
;

/* specifier */
Specifier: TYPE  
    {
        $$=new Node(NONTERMINAL, "Specifier", 1, @$.first_line, $1);
    }
    | StructSpecifier  
    {
        $$=new Node(NONTERMINAL, "Specifier", 1, @$.first_line, $1);
    }
;

StructSpecifier: STRUCT ID LC DefList RC  /*struct Complex { int real, image; }*/
    {
        $$=new Node(NONTERMINAL, "StructSpecifier", 5, @$.first_line, $1, $2, $3, $4, $5);
    }
    | STRUCT ID /* struct Complex a, b;*/
    {
        $$=new Node(NONTERMINAL, "StructSpecifier", 2, @$.first_line, $1, $2);
    }
    | STRUCT ID LC DefList error /* + 1 shift/reduce conflict */
    {
        my_error(MISS_CURLY_BRACE, @$.first_line,'}');
        has_error=1;
    }
    | STRUCT ID error DefList RC /* + 1 shift/reduce conflict */
    {
        my_error(MISS_CURLY_BRACE, @$.first_line,'{');
        has_error=1;
    }

;

/* declarator */
VarDec: ID  
    {
        $$=new Node(NONTERMINAL, "VarDec", 1, @$.first_line, $1);
    }
    | VarDec LB INT RB  /* a[10][2] */
    {
        $$=new Node(NONTERMINAL, "VarDec", 4, @$.first_line, $1, $2, $3, $4);
    }
    | VarDec LB INT error {
        my_error(MISS_BRACKET, @$.first_line,']');
        has_error=1;
    }
;

FunDec: ID LP VarList RP /*foo(int x, float y[10])*/
    {
        $$=new Node(NONTERMINAL, "FunDec", 4, @$.first_line, $1, $2, $3, $4);
    }
    | ID LP RP 
    {
        $$=new Node(NONTERMINAL, "FunDec", 3, @$.first_line, $1, $2, $3);
    }
    | ID LP VarList error 
    {
        my_error(MISS_PAREMTHESIS, @$.first_line,')'); 
        has_error=1;
    }
    | ID LP error 
    {
        my_error(MISS_PAREMTHESIS, @$.first_line,')'); 
        has_error=1;
    }
    | ID error VarList RB /* + 1 shift/reduce conflict */
    {
        my_error(MISS_PAREMTHESIS, @$.first_line,'('); 
        has_error=1;
    }
    | ID error RB /* + 1 shift/reduce conflict */
    {
        my_error(MISS_PAREMTHESIS, @$.first_line,'('); 
        has_error=1;
    }
;

VarList: ParamDec COMMA VarList     
    {
        $$=new Node(NONTERMINAL, "VarList", 3, @$.first_line, $1, $2, $3);
    }
    | ParamDec 
    {
        $$=new Node(NONTERMINAL, "VarList", 1, @$.first_line, $1);
    }
;

ParamDec: Specifier VarDec 
    {
        $$=new Node(NONTERMINAL, "ParamDec", 2, @$.first_line, $1, $2);
    }
    | error VarDec 
    {
        my_error(MISS_SPEC, @$.first_line);
        has_error=1;
    }
    
;

/* statement */
CompSt: LC DefList StmtList RC 
    {
        $$=new Node(NONTERMINAL, "CompSt", 4, @$.first_line, $1, $2, $3, $4);
    }


;

StmtList: /* allow empty input */  
    {
        $$ = new Node(NONTERMINAL, "StmtList", 0, @$.first_line);
    }
    |Stmt StmtList 
    {
        $$=new Node(NONTERMINAL, "StmtList", 2, @$.first_line, $1, $2);
    }
;

Stmt: Exp SEMI 
    {
        $$=new Node(NONTERMINAL, "Stmt", 2, @$.first_line, $1, $2);
    }
    | CompSt 
    {
        $$=new Node(NONTERMINAL, "Stmt", 1, @$.first_line, $1);
    }
    | RETURN Exp SEMI 
    {
        $$=new Node(NONTERMINAL, "Stmt", 3, @$.first_line, $1, $2, $3);
    }
    | IF LP Exp RP Stmt %prec LOWER_THAN_ELSE
    {
        $$=new Node(NONTERMINAL, "Stmt", 5, @$.first_line, $1, $2, $3, $4, $5);
    }
    | IF LP Exp RP Stmt ELSE Stmt 
    {
        $$=new Node(NONTERMINAL, "Stmt", 7, @$.first_line, $1, $2, $3, $4, $5, $6, $7);
    }
    | WHILE LP Exp RP Stmt 
    {
        $$=new Node(NONTERMINAL, "Stmt", 5, @$.first_line, $1, $2, $3, $4, $5);
    }
    | Exp error 
    {
        my_error(MISS_SEMI, @$.first_line); 
        has_error=1;
    }
    | RETURN Exp error 
    {
        my_error(MISS_SEMI, @$.first_line);
        has_error=1;
    }
    | IF LP Exp error Stmt
    {
        my_error(MISS_PAREMTHESIS, @$.first_line,')'); has_error=1;
    }
    | IF error Exp RP Stmt
    {
        my_error(MISS_PAREMTHESIS, @$.first_line,'('); has_error=1;
    }
    | WHILE LP Exp error Stmt 
    {
        my_error(MISS_PAREMTHESIS, @$.first_line,')'); has_error=1;
    }
    | WHILE error Exp RP Stmt 
    {
        my_error(MISS_PAREMTHESIS, @$.first_line,')'); has_error=1;
    }
;

/* local definition */ 
DefList: /* allow empty input */  
    {
        $$ = new Node(NONTERMINAL, "DefList", 0, @$.first_line);
    };
    | Def DefList 
    {
        $$=new Node(NONTERMINAL, "DefList", 2, @$.first_line, $1, $2);
    }
; 

Def: Specifier DecList SEMI 
    {
        $$=new Node(NONTERMINAL, "Def", 3, @$.first_line, $1, $2, $3);
    }
    | Specifier DecList error
    {
        my_error(MISS_SEMI, @$.first_line); 
        has_error=1;
    }
    | error DecList SEMI 
    {
        my_error(MISS_SPEC, @$.first_line +1); has_error=1;
    }
;

DecList: Dec 
    {
        $$=new Node(NONTERMINAL, "DecList", 1, @$.first_line, $1);
    }
    | Dec COMMA DecList 
    {
        $$=new Node(NONTERMINAL, "DecList", 3, @$.first_line, $1, $2, $3);
    }
;

Dec: VarDec 
    {
        $$=new Node(NONTERMINAL, "Dec", 1, @$.first_line, $1);
    }
    | VarDec ASSIGN Exp  
    {
        $$=new Node(NONTERMINAL, "Dec", 3, @$.first_line, $1, $2, $3);
    }
;

/* Expression */
Exp: Exp ASSIGN Exp 
    {$$=new Node(NONTERMINAL, "Exp", 3, @$.first_line, $1, $2, $3);}
    | Exp AND Exp 
    {$$=new Node(NONTERMINAL, "Exp", 3, @$.first_line, $1, $2, $3);}
    | Exp OR Exp 
    {$$=new Node(NONTERMINAL, "Exp", 3, @$.first_line, $1, $2, $3);}
    | Exp LT Exp 
    {$$=new Node(NONTERMINAL, "Exp", 3, @$.first_line, $1, $2, $3);}
    | Exp LE Exp 
    {$$=new Node(NONTERMINAL, "Exp", 3, @$.first_line, $1, $2, $3);}
    | Exp GT Exp 
    {$$=new Node(NONTERMINAL, "Exp", 3, @$.first_line, $1, $2, $3);}
    | Exp GE Exp 
    {$$=new Node(NONTERMINAL, "Exp", 3, @$.first_line, $1, $2, $3);}
    | Exp NE Exp 
    {$$=new Node(NONTERMINAL, "Exp", 3, @$.first_line, $1, $2, $3);}
    | Exp EQ Exp 
    {$$=new Node(NONTERMINAL, "Exp", 3, @$.first_line, $1, $2, $3);}
    | Exp PLUS Exp 
    {$$=new Node(NONTERMINAL, "Exp", 3, @$.first_line, $1, $2, $3);}
    | Exp MINUS Exp 
    {$$=new Node(NONTERMINAL, "Exp", 3, @$.first_line, $1, $2, $3);}
    | Exp MUL Exp 
    {$$=new Node(NONTERMINAL, "Exp", 3, @$.first_line, $1, $2, $3);}
    | Exp DIV Exp 
    {$$=new Node(NONTERMINAL, "Exp", 3, @$.first_line, $1, $2, $3);}

    | LP Exp RP 
    {$$=new Node(NONTERMINAL, "Exp", 3, @$.first_line, $1, $2, $3);}
    | MINUS Exp 
    {$$=new Node(NONTERMINAL, "Exp", 2, @$.first_line, $1, $2);}
    | NOT Exp 
    {$$=new Node(NONTERMINAL, "Exp", 2, @$.first_line, $1, $2);}
    
    | ID LP Args RP 
    {$$=new Node(NONTERMINAL, "Exp", 4, @$.first_line, $1, $2, $3, $4);}

    | ID LP RP  
    {$$=new Node(NONTERMINAL, "Exp", 3, @$.first_line, $1, $2, $3);}
    
    | Exp LB Exp RB 
    {$$=new Node(NONTERMINAL, "Exp", 4, @$.first_line, $1, $2, $3, $4);}
    
    | Exp DOT ID 
    {$$=new Node(NONTERMINAL, "Exp", 3, @$.first_line, $1, $2, $3);}
    | ID 
    {$$=new Node(NONTERMINAL, "Exp", 1, @$.first_line, $1);}
    | INT 
    {$$=new Node(NONTERMINAL, "Exp", 1, @$.first_line, $1);}
    | FLOAT 
    {$$=new Node(NONTERMINAL, "Exp", 1, @$.first_line, $1);}
    | CHAR 
    {$$=new Node(NONTERMINAL, "Exp", 1, @$.first_line, $1);}
    | ILLEGAL_TOKEN 
    {
        has_error = 1;
    }
    | INVALID_NUMBER 
    {
        has_error=1;
    }
    | Exp ILLEGAL_TOKEN Exp 
    {
        has_error = 1;
    }
    | LP Exp error 
    {
        my_error(MISS_PAREMTHESIS, @$.first_line,')'); 
        has_error=1;
    } 
    | ID LP Args error 
    {
        my_error(MISS_PAREMTHESIS, @$.first_line,')'); has_error=1;
    } 
    | ID error Args RP /* + 1 shift/reduce conflict */
    {
        my_error(MISS_PAREMTHESIS, @$.first_line,'('); has_error=1;
    } 
    | ID LP error 
    {
        my_error(MISS_PAREMTHESIS, @$.first_line,')'); 
        has_error=1;
    } 
    | ID error RP 
    {
        my_error(MISS_PAREMTHESIS, @$.first_line,'('); 
        has_error=1;
    } 
    | Exp LB Exp error 
    {
        my_error(MISS_BRACKET, @$.first_line,']'); 
        has_error=1;
    }
    
;

Args : Exp COMMA Args 
    {
        $$=new Node(NONTERMINAL, "Args", 3, @$.first_line, $1);
    }
    | Exp  
    {
        $$=new Node(NONTERMINAL, "Args", 1, @$.first_line, $1);
    }
;
%%

void yyerror(const char* s) {
     
}
int main(int argc, char **argv){
    if(argc != 2) {
        fprintf(stderr, "Usage: %s <file_path>\n", argv[0]);
        exit(-1);
    }
    else if(!(yyin = fopen(argv[1], "r"))) {
        perror(argv[1]);
        exit(-1);
    }
    yyparse();
    return 0;
}