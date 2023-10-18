#include <stdio.h>

int main() {
    int rows, i, j, space;
    char alpha;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        for (space = i; space < rows; space++) {
            printf("  ");
        }

        alpha = 'A';
        for (j = 1; j <= i; j++) {
            printf("%c ", alpha);
            alpha++;
        }

        alpha--;
        for (j = 1; j <= i - 1; j++) {
            alpha--;
            printf("%c ", alpha);
        }

        printf("\n");
    }

    return 0;
}
