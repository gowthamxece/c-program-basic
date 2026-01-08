#include <stdio.h>
int main ()
{

    int a[100];
    int limet;
    int i,sum=0;
    printf ("enter the frequency count :");
    scanf ("%d",&limet);
    printf("the the integer number:\n");
    for(i=0;i<limet;i++)
    {
        scanf("%d",&a[i]);

    }
    for(i=0;i<limet;i++){
        sum=sum+a[i];

    }
    printf("the values :%d\n",sum);
    return 0;
}
