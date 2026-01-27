#include<stdio.h>
void isprime();
void factorial();
void sub();
void add();

int main() 
{
    int y; 

    printf("\t1: || Addition      ||\n");
    printf("\t2: || Subtraction   ||\n");
    printf("\t3: || Factorial     ||\n");
    printf("\t4: || Prime Number  ||\n");
    printf("\t5: || EXIT          ||\n");
    printf("\n-----------------------------\n");
    while(1) 
    {
        printf("\nChoose the number (1-5): ");
        scanf("%d", &y);

        switch (y) 
        {
            case 1:
                add();
                break;
            case 2:
                sub();
                break;
            case 3:
                factorial();
                break;
            case 4:
            isprime();
            break;
            case 5:
            printf("exit number");
                return 0;
            default:
                printf("Not found. Please try again.\n");
        }
    } 
    return 0;
}

void add() 
{
    int num1, num2, result;
    printf("Enter two values: ");
    scanf("%d%d", &num1, &num2);
    result = num1 + num2;
    printf("Addition result: %d\n", result);
}

void sub() 
{
    int num1, num2, result;
    printf("Enter two values: ");
    scanf("%d%d", &num1, &num2);
    result = num1 - num2;
    printf("Subtraction result: %d\n", result);
}

void factorial() 
{
    int i, n;
    int result = 1;
    
    printf("Enter the number to find factorial: ");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++)
    {
        result = result * i;
    }
    printf("Factorial result: %d\n", result);
}
void isprime() 
{
    int n, i, flag = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    for(i = 2; i <= n/2; i++) 
    {
        if(n % i == 0) 
        {
            flag = 1;
            break;
        }
    }
    
    if(flag == 0)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);
}