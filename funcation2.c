#include <stdio.h>

// 1. Function Declarations
void factorial();
void sub();
void add();

int main() 
{
    int y; 

    printf("\t1: || Addition      ||\n");
    printf("\t2: || Subtraction   ||\n");
    printf("\t3: || Factorial     ||\n");
    printf("\t4: || EXIT          ||\n");
    printf("\n-----------------------------\n");

    // FIX: Use while(1) for menus, not a for loop with 'i'
    while(1) 
    {
        printf("\nChoose the number (1-4): ");
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
                printf("Exiting program.\n");
                return 0; // Ends the program
            default:
                printf("Not found. Please try again.\n");
        }
    } 
    return 0;
} // <--- FIX: You MUST close main() here!

// ---------------------------------------------------------
// Function Definitions (Must be OUTSIDE main)
// ---------------------------------------------------------

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
    int result = 1; // FIX: Must start at 1 for multiplication!
    
    printf("Enter the number to find factorial: ");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++)
    {
        result = result * i;
    }
    printf("Factorial result: %d\n", result);
}