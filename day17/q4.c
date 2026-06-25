#include <stdio.h>

int main() {
    int arr1[50], arr2[50], n1, n2, i, j;

    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);
    printf("Enter %d elements for first array:\n", n1);
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);
    printf("Enter %d elements for second array:\n", n2);
    for(i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    printf("\nCommon elements are:\n");
    for(i = 0; i < n1; i++) {
        for(j = 0; j < n2; j++) {
            if(arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                break; // avoid printing duplicates multiple times
            }
        }
    }

    return 0;
}

