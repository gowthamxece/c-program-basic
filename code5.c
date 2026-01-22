#include <stdio.h>

/* --- 1. Function Prototypes ---
   (This tells the compiler these functions exist before we use them in main) */
void printMenu();
int add(int a, int b);
int subtract(int a, int b);
unsigned long long factorial(int n);

int main() {
    int choice;
    int num1, num2;

    printf("Welcome to the Function Demo Program!\n");

    while(1) {
        // Calling a void function
        printMenu();
        
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 4) {
            printf("Exiting program. Goodbye!\n");
            break;
        }

        switch(choice) {
            case 1:
                printf("Enter two numbers to add: ");
                scanf("%d %d", &num1, &num2);
                // Calling a function and storing the return value
                int sum = add(num1, num2); 
                printf("Result: %d\n", sum);
                break;

            case 2:
                printf("Enter two numbers to subtract: ");
                scanf("%d %d", &num1, &num2);
                // Calling the function directly inside printf
                printf("Result: %d\n", subtract(num1, num2)); 
                break;

            case 3:
                printf("Enter a number to find factorial: ");
                scanf("%d", &num1);
                if (num1 < 0) {
                    printf("Error: Factorial of negative number doesn't exist.\n");
                } else {
                    printf("Result: %llu\n", factorial(num1));
                }
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }
        printf("\n----------------------------\n");
    }

    return 0;
}

/* --- 2. Function Definitions --- 
   (The actual code logic for the functions) */

// Task: Just print text. No input needed, no output returned.
void printMenu() {
    printf("\nSelect an operation:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Calculate Factorial\n");
    printf("4. Exit\n");
}

// Task: Take two integers, return their sum.
int add(int a, int b) {
    return a + b;
}

// Task: Take two integers, return the difference.
int subtract(int a, int b) {
    return a - b;
}

// Task: Calculate factorial (e.g., 5! = 5*4*3*2*1)
unsigned long long factorial(int n) {
    unsigned long long result = 1;
    for (int i = 1; i <= n; i++) {
        result = result * i;
    }
    return result;
}