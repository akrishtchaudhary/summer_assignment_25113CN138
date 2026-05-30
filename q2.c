#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num != 0) {
        remainder = num % 10;              // extract last digit
        reversed = reversed * 10 + remainder; // build reversed number
        num /= 10;                         // remove last digit
    }

    printf("Reversed number = %d\n", reversed);

    return 0;
}
