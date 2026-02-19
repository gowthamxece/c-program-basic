#include<stdio.h>
#define ADD (a+b)
#define SUB (a-b)
#define MUL (a*b)
#define DIV (a/b)
int main ()
{
int a,b,num;
printf("Enter the two number :\n");
scanf("%d%d",&a,&b);
printf("--------------------------\n");
num=ADD;
printf("ADD result=%d\n",num);
num=SUB;
printf("SUB result=%d\n",num);
num=MUL;
printf("MUL result= %d\n",num);
num=DIV;
printf("DIV result=%d\n",num);
printf("-----------------------------");
return 0;
}
