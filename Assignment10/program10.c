#include <stdio.h>

// Function to calculate factorial
long long factorial(int n) {
    long long fact = 1;
    int i;
    for(i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to calculate power
int power(int base, int exp) {
    int result = 1, i;
    for(i = 1; i <= exp; i++) {
        result *= base;
    }
    return result;
}

int main() {
    int choice;
    int a, b;

    printf("===== Simple Calculator =====\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Power (x^y)\n");
    printf("6. Factorial (x!)\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            printf("Result = %d", a + b);
            break;

        case 2:
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            printf("Result = %d", a - b);
            break;

        case 3:
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            printf("Result = %d", a * b);
            break;

        case 4:
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            if(b != 0)
                printf("Result = %.2f", (float)a / b);
            else
                printf("Error! Division by zero.");
            break;

        case 5:
            printf("Enter base and exponent: ");
            scanf("%d %d", &a, &b);
            printf("Result = %d", power(a, b));
            break;

        case 6:
            printf("Enter a number: ");
            scanf("%d", &a);
            if(a >= 0)
                printf("Result = %lld", factorial(a));
            else
                printf("Factorial not defined for negative numbers.");
            break;

        default:
            printf("Invalid choice!");
    }

    return 0;
}
