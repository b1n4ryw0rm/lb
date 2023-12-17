%{
#include <stdio.h>
int sc=0,wc=0,lc=0,cc=0;
%}
%%
[\n] {lc++, cc+=yyleng;}
[ \t] {sc++, cc+=yyleng;}
[^\t\n ]+ {wc++, cc+=yyleng;}
%%

int main(int argc, char* argv[]) {
    printf("enter the input\n");
    yylex();
    printf("%d lines", lc);
    printf("%d words", wc);
    printf("%d spaces", sc);
    printf("%d characters", cc);
}
int yywrap() {
    return 1;
}

