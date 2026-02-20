#include<stdio.h>
#define EVEN (n%2==0)
int main ()
{
int n;
printf("enter the number :");
scanf("%d",&n);
if(EVEN)
printf("even");
else
printf("odd");
return 0;
}
