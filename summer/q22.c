#include <stdio.h>
int main() {
    int n, i, j, k = 1;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            k = 0;
        }
        else {
            k = 1;
        }
        for (j = 1; j <= i; j++) {
            printf("%d", k);
            k = !k;
        }
        printf("\n");
    }
    return 0;
}