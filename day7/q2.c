#include <stdio.h>

// Recursive function to calculate nth Fibonacci number
int fibonacci(int n) {
    if (n == 0) {
        return 0;  // Base case 1
    } else if (n == 1) {
        return 1;  // Base case 2
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);  // Recursive case
    }
}

int main() {
    int n, i;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci series up to %d terms:\n", n);
    for (i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    return 0;
}
