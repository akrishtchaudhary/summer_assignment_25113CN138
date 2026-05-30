#include <stdio.h>

int main() {
    int num, product = 1, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Handle case when number is 0
    if (num == 0) {
        product = 0;
    } else {
        while (num != 0) {
            remainder = num % 10;       // extract last digit
            product *= remainder;       // multiply digit to product
            num /= 10;                  // remove last digit
        }
    }

    printf("Product of digits = %d\n", product);

    return 0;
}
