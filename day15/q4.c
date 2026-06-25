#include <stdio.h>

int main() {
    int arr[100], n, i, j = 0;
    int temp[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Copy non-zero elements first
    for(i = 0; i < n; i++) {
        if(arr[i] != 0) {
            temp[j++] = arr[i];
        }
    }

    // Fill remaining positions with zeroes
    while(j < n) {
        temp[j++] = 0;
    }

    printf("\nArray after moving zeroes to the end:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", temp[i]);
    }

    return 0;
}
