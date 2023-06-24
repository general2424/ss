%{
#include<stdio.h>
#include<stdlib.h>
int v=0,op=0,id=0,flag=0;
%}
%%
[0-9]+ {id++;printf("\n identifier");ECHO;}
[0\+\*]+ {op++;printf("\n operator");ECHO;}
"c" {v++;}
")" {v--;}
";" {flag=0;}
.|\n ;
%%
int main()
{
printf("Enter the arthematic expression\n");
yylex();
if((op+1)==id && v==0)
printf("\n valid expression\n");
else
printf("\n invalid expression is invalid\n");
printf("\n identifier:%d\n",id);
printf("\n operators:%d\n",op);
}
