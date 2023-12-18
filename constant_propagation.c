/Input
#include<stdio.h>
#include<string.h>
#include<ctype.h>
void inputO;
void output();
void change(int p.char *res);
void constant();
struct exprf
char op[2],op1[5],op2[5],res[5];
int flag;
Jarr[10l:
1nt n;
void main()
inputO;
constantO);
outputO;
}
void inputf
inti;
printf("In\nEnter the maximum number of expressions: ");
scanf("% d",&n);
printf("InEnter the input: \n");
for(i=0;i<n;it+)l
scanf("% s", arr[i].op);
scanf("%s", arr[i].op1);
scanf("%s", arr[i].op2);
scanf("%s", arr[i].res);
arr[i).flag-=0;
}}

void constantO(
int i;
int op1,op2,res;
char op,res1[5];
for(i=0;i<n;i+l
if(isdigit(arr[i].op1[0]) && isdigit(arr[i].op2[0) || strcmp(arr[i].op,"=")==0)/
/*if both digits, store them in variables */
opl=atoi@arr[i].opI);
op2=atoi(arr[i].op2);
op=arr[i].op[0];
switch(op)f
case '+':
res=opl+op2;
break;
case '_'
res=opl-op2;
break;
case '*':
res=opl*op2;
break;
case '/:
res=opl/op2;
break;
case '=':
res=opl;
break;
}
sprintf(resl,"%d",res);
arli].flag=1;
changeGi,resl);
}}}
void output(
int i=0;
printf("InOptimized code is: ");
for(i=0;i<n;it+)1
if(!arr[i].flag)
printf("In%s %s %s %s", arr[i].op,arr[i].op1,arr[i].op2, arr[i].res);
}}

void change(int p,char *res)(
int i;
for(i=p+1;i<n;i+t)l
if(strcmp(arr[p].res,arr[i].op1)==0)
strepy(@arrli].opl,res):
else if(strcmp(arr[p].res, arr[i].op2)==0)
strcpy(arr[i].op2.res);
}}