#include <stdio.h>

// Function to calculate sum
int sum(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2, result;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Call function
    result = sum(num1, num2);

    printf("Sum = %d\n", result);

    return 0;
}
