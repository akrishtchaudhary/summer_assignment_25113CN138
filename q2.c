#include <stdio.h>

// Function to find maximum
int maximum(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    int num1, num2, result;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Call function
    result = maximum(num1, num2);

    printf("Maximum = %d\n", result);

    return 0;
}
