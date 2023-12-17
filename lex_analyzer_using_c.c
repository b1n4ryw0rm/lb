#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int isKeyword(char buffer[]) {
    char keywords[5][10] = { "if", "for", "while", "return", "break"};
    int flag = 0;
    for(int i=0;i<5;++i) {
        if (strcmp(keywords[i], buffer) == 0) {
            flag = 1;
            break;
        }
    }
    return flag;
}

int main() {
    char ch, buffer[10], operators[] = "+-/*%=";
    FILE *fp;
    int i, j = 0;
    fp = fopen("pgm.txt", "r");
    if (fp == NULL) {
        printf("error");
        exit(0);
    }
    while((ch = fgetc(fp)) != EOF) {
        for (i = 0;i < 6;i++){
            if (ch == operators[i])
                printf(" %c is an operator\n", ch);
        }
        if (isalnum(ch)){
            buffer[j++] = ch;
        } else if((ch == ' ' || ch == '\n') && j != 0 ) {
            buffer[j] = '\0';
            j = 0;
            if (isKeyword(buffer) == 1) {
                printf("%s is a keyword\n", buffer);
            } else {
                printf("%s is an identifier\n", buffer);
            }
        }
    }
    fclose(fp);
    return 0;
}
