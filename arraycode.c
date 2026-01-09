#include<stdio.h>
int main()
{
    int limet,i,value[100],max1=0;
    printf("enter the limet :");
    scanf("%d",&limet);
    printf ("enter the number :");
    for (i=1;i<=limet;i++){
         scanf ("%d",&value[i]);
    }
    max1=value[0];
    for (i=0;i<=limet;i++)
    {
        if (value[i]<=max1)
        {
            max1=value[i];
            /* code */
        }
        
    }
          printf ("find in bigset value:%d\n",max1);
          return 0;


}