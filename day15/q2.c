#include <stdio.h>

int main() {
    int arr[100], n, i;
    int first;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Save first element
    first = arr[0];

    // Shift elements left
    for(i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Put first element at last position
    arr[n - 1] = first;

    printf("\nArray after left rotation:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
