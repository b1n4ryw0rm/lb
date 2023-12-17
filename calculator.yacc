%{
#include<stdio.h>
int flag = 0;
%}

%token NUMBER
%left '+''-'
%left '*''/''%'
%left '('')'
%%

ArithmeticExpression: E{
    printf("result = %d\n", $$);
    return 0;
}
E:E'+'E {$$ = $1 + $3;}
|E'-'E {$$ = $1 - $3;}
|E'*'E {$$ = $1 * $3;}
|NUMBER {$$ = $1;}
%%

void main() {
    printf("enter expression\n");
    yyparse();
    if (flag == 0){
        printf("valid\n");
    }
    void yyerror() {
        printf("not valid\n");
        flag = 1;
    }
}
