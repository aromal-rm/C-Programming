#include <stdio.h>

int main() {
    int a[50][50], i, j, r, c, c1 = 0, c2 = 0, maxr;
    
    printf("\nEnter the number of rows: ");
    scanf("%d", &r);
    
    printf("\nEnter the number of columns: ");
    scanf("%d", &c);
    
    for (i = 0; i < r; i++) {
        printf("\nEnter the elements of the row number %d: ",i+1);
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nThe entered matrix is: \n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%-5d", a[i][j]);
        }
        printf("\n");
    }
    
    for (i = 0; i < r; i++) {
        c1 = 0;
        for (j = 0; j < c; j++) {
            if (a[i][j] == 1) {
                c1++;
            }
        }
        if (c1 > c2) {
            c2 = c1;
            maxr = i;
        }
    }
    
    printf("\nThe row with the maximum number of 1s is row %d\n", maxr+1);
    
    return 0;
}
