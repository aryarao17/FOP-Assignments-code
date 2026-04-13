#include <stdio.h>
#include <math.h>

long long factorial(int n) {
    long long fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n, i;
    float x, sum = 0;

    printf("Enter value of x (in radians): ");
    scanf("%f", &x);

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        int power = 2*i + 1;
        float term;

        if(i % 2 == 0)
            term = (1.0 * pow(x, power)) / factorial(power);
        else
            term = -(1.0 * pow(x, power)) / factorial(power);

        sum += term;
    }

    printf("Sum of sine series = %.5f", sum);

    return 0;
}
