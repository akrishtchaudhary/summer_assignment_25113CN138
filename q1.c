#include <stdio.h>

int main() {
    int num, sum = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num != 0) {
        remainder = num % 10;   // extract last digit
        sum += remainder;       // add digit to sum
        num /= 10;              // remove last digit
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}
