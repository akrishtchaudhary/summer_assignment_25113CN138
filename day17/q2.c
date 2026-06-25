#include <stdio.h>

int main() {
    int arr1[50], arr2[50], unionArr[100];
    int n1, n2, i, j, k = 0;

    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);
    printf("Enter %d elements for first array:\n", n1);
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
        unionArr[k++] = arr1[i];  // copy arr1 into unionArr
    }

    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);
    printf("Enter %d elements for second array:\n", n2);
    for(i = 0; i < n2; i++) {
        int found = 0;
        for(j = 0; j < k; j++) {
            if(unionArr[j] == arr2[i]) {
                found = 1;
                break;
            }
        }
        if(!found) {
            unionArr[k++] = arr2[i];
        }
    }

    printf("\nUnion of the two arrays:\n");
    for(i = 0; i < k; i++) {
        printf("%d ", unionArr[i]);
    }

    return 0;
}
