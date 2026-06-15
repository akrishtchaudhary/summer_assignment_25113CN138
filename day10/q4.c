#include <stdio.h>

int main() {
    int rows, i, j, space;
    char ch = 'A';  // Starting character

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        // Print spaces
        for (space = 1; space <= rows - i; space++) {
            printf("  ");
        }
        // Print characters
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("%c ", ch);
        }
        ch++; // Move to next character for next row
        printf("\n");
    }
    return 0;
}
