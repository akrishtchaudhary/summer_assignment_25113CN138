#include <stdio.h>

int main() {
    int arr[100], n, i;
    int sum = 0, total, missing;

    printf("Enter the size of array (n-1): ");
    scanf("%d", &n);

    printf("Enter %d elements (from 1 to n with one missing):\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    // Total sum of numbers from 1 to n
    total = (n + 1) * (n + 2) / 2;

    // Missing number
    missing = total - sum;

    printf("Missing number is: %d\n", missing);

    return 0;
}
