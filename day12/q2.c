#include <stdio.h>
#include <math.h>

// Function to check Armstrong number
int isArmstrong(int n) {
    int original = n, remainder, result = 0;
    int digits = 0, temp = n;

    // Count digits
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = n;
    while (temp != 0) {
        remainder = temp % 10;
        result += pow(remainder, digits);
        temp /= 10;
    }

    if (result == original)
        return 1;  // Armstrong
    else
        return 0;  // Not Armstrong
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num))
        printf("%d is an Armstrong number\n", num);
    else
        printf("%d is NOT an Armstrong number\n", num);

    return 0;
}
