#include<stdio.h>
#include<string.h>

int main() {
    char icode[10][30], str[20], opr[10];
    int i = 0;
    printf("enter a set of intr codes:\n");
    do {
        scanf("%s", icode[i]);
    }while(strcmp(icode[i++], "exit") != 0);

    printf("\n\ntarget code generation\n");
    i = 0;
    do {
        strcpy(str, icode[i]);
        switch(str[3]){
            case '+':
                strcpy(opr, "ADD");
                break;
            case '-':
                strcpy(opr, "SUB");
                break;
            case '*':
                strcpy(opr, "MUL");
                break;
            case '/':
                strcpy(opr, "DIV");
                break;
        }

        printf("\t\n mov %c, R%d", str[2], i);
        printf("\t\n %s %c, R%d", opr, str[4], i);
        printf("\t\n mov R%d, %c", i, str[0]);
    }while(strcmp(icode[++i], "exit") != 0);

    printf("\n");
}
