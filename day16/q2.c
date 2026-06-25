#include <stdio.h>

int main() {
    int arr[100], freq[100];
    int n, i, j, count;
    int maxFreq = 0, element = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1;  // initialize frequency array
    }

    // Count frequencies
    for(i = 0; i < n; i++) {
        count = 1;
        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
                freq[j] = 0; // mark as visited
            }
        }
        if(freq[i] != 0) {
            freq[i] = count;
        }
    }

    // Find element with maximum frequency
    for(i = 0; i < n; i++) {
        if(freq[i] > maxFreq) {
            maxFreq = freq[i];
            element = arr[i];
        }
    }

    printf("\nElement with maximum frequency: %d (occurs %d times)\n", element, maxFreq);

    return 0;
}
