#include <stdio.h>

int main() {
    int rows, i, j;
    char ch;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        ch = 'A';  // start from A each row
        for (j = 1; j <= i; j++) {
            printf("%c ", ch);
            ch++;  // move to next character
        }
        printf("\n");
    }
    return 0;
}
