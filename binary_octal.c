#include <stdio.h>

int main() {
    int binary, decimal = 0, octal = 0, base = 1, digit;

    printf("Enter a binary number: ");
    scanf("%d", &binary);

    while (binary > 0) {
        digit = binary % 10;
        decimal += digit * base;
        base *= 2;
        binary /= 10;
    }

    base = 1;

    while (decimal > 0) {
        digit = decimal % 8;
        octal += digit * base;
        base *= 10;
        decimal /= 8;
    }

    printf("Octal = %d\n", octal);

    return 0;
}