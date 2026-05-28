#include <stdio.h>

int main() {
    int N;
    printf("Enter a number: ");
    scanf("%d", &N);

    int sum = N * (N + 1) / 2;
    printf("Sum of first %d natural numbers is: %d\n", N, sum);

    return 0;
}
