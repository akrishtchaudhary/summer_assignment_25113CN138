#include <stdio.h>

int main() {
    int n, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0) {
        count = count + (n & 1);  // check last bit
        n = n >> 1;               // right shift by 1
    }

    printf("Number of set bits = %d\n", count);

    return 0;
}