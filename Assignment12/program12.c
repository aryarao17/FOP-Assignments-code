#include <stdio.h>

// Function to find GCD using Euclidean algorithm
int findGCD(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to find smallest common divisor (other than 1)
int smallestCommonDivisor(int a, int b) {
    int min = (a < b) ? a : b;

    for(int i = 2; i <= min; i++) {
        if(a % i == 0 && b % i == 0)
            return i;
    }
    return -1; // no common divisor other than 1
}

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int gcd = findGCD(a, b);
    int scd = smallestCommonDivisor(a, b);

    if(scd != -1)
        printf("Smallest Common Divisor (other than 1) = %d\n", scd);
    else
        printf("No common divisor other than 1\n");

    printf("GCD = %d\n", gcd);

    return 0;
}
