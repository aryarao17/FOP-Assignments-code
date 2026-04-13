#include <stdio.h>

int main() {
    int num, original, remainder;
    int sum = 0;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    original = num;

    while (num != 0) {
        remainder = num % 10;        // get last digit
        sum += remainder * remainder * remainder;  // cube and add
        num = num / 10;             // remove last digit
    }

    if (sum == original)
        printf("%d is an Armstrong number.", original);
    else
        printf("%d is not an Armstrong number.", original);

    return 0;
}
