%option noyywrap
%{
#include <stdio.h>
%}
%%
"#include<"[a-zA-Z]+.h">" { fprintf(yyout, "%s is a header file\n", yytext); }
"main"|"int" { fprintf(yyout, "%s is a keyword\n", yytext); }
^[a-zA-Z]+ { fprintf(yyout, "%s is an identifier\n", yytext); }
%%

int main() {
    yyin = fopen("pgm.txt", "r");
    yylex();
    return 0;
}

