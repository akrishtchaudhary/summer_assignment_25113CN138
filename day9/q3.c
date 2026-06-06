#include <stdio.h>

int main() {
    int rows, i, j;
    char ch = 'A';   // starting character

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("%c ", ch);  // print same character in row
        }
        printf("\n");
        ch++;  // move to next character for next row
    }
    return 0;
}
