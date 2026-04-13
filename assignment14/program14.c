#include <stdio.h>
#include <math.h>

int main() {
    long int binary;
    int decimal = 0, remainder, i = 0;

    printf("Enter a binary number: ");
    scanf("%ld", &binary);

    while(binary != 0) {
        remainder = binary % 10;   // get last digit (0 or 1)
        decimal += remainder * pow(2, i);
        binary = binary / 10;
        i++;
    }

    printf("Decimal equivalent = %d", decimal);

    return 0;
}
