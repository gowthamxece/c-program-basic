#include <stdio.h>
int main()
{
int i,number[100],n,max1,max2;
printf ("enter the limet of number :");
scanf("%d",&n);
printf("show the number elemente:%d",n);
for (i=0;i<n;i++){
scanf("%d",&number[i]);
}
max1=number[0];
max2=number[0];
for (i=0;i<n;i++){
if(max1<number[i]){
max1=number[i];

}
if(max2>number[i]){
max2=number[i];
}
}
printf("find is max1:%d",max1);
printf("find is max2 :%d",max2);
}
