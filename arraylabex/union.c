#include<stdio.h>

void getarray(int a[], int *n) {
    int i, st = 0;
    for (i = 0; i < *n; i++) {
        scanf("%d", &a[i]);
        // st = st + a[i];
    }
    return;
}