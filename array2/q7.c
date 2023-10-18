#include <stdio.h>

void getmatrix(int a[][10], int *r, int *c) {
    int i, j;
    printf("Enter the number of rows and columns: ");
    scanf("%d%d", r, c);
    for (i = 0; i < *r; ++i) {
        printf("Enter the row number %d\n", i + 1);
        for (j = 0; j < *c; ++j) {
            scanf("%d", &a[i][j]);
        }
    }
}

void trans(int a[][10], int *r, int *c) {
    int i, j, temp;
    for (i = 0; i < *c; i++) {
        for (j = i + 1; j < *r; j++) {
            temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }
}

void showmat(int a[][10], int *r, int *c) {
    int i, j;
    for (i = 0; i < *r; ++i) {
        for (j = 0; j < *c; ++j) {
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }
    
}

int main() {
    int r, c, a[10][10];
    getmatrix(a, &r, &c);
    trans(a, &r, &c);
    printf("The transpose of the matrix is:\n");
    showmat(a, &c, &r); 
    return 0;
}
