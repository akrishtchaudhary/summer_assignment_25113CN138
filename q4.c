#include <stdio.h>

int main() {
    int num, reversed = 0, remainder, original;

    printf("Enter an integer: ");
    scanf("%d", &num);

    original = num;  // store the original number

    while (num != 0) {
        remainder = num % 10;                 // extract last digit
        reversed = reversed * 10 + remainder; // build reversed number
        num /= 10;                            // remove last digit
    }

    if (original == reversed) {
        printf("%d is a palindrome number.\n", original);
    } else {
        printf("%d is not a palindrome number.\n", original);
    }

    return 0;
}
