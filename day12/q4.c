#include <stdio.h>

// Function to check Perfect Number
int isPerfect(int n) {
    int sum = 0, i;

    // Find sum of proper divisors
    for (i = 1; i <= n/2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    if (sum == n)
        return 1;  // Perfect number
    else
        return 0;  // Not perfect
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPerfect(num))
        printf("%d is a Perfect number\n", num);
    else
        printf("%d is NOT a Perfect number\n", num);

    return 0;
}
