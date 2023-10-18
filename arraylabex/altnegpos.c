#include <stdio.h>

void getarray(int a[], int *n) {
    int i;
    for (i = 0; i < *n; i++) {
        scanf("%d", &a[i]);
    }
}

void printArray(int a[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}

int main() {
    int a1[50], neg[50], pos[50], n, l = 0, m = 0, i, j, k;
    
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Enter the %d terms: ", n);
    getarray(a1, &n);
    
    j = 0;
    k = 0;
    for (i = 0; i < n; i++) {
        if (a1[i] < 0) {
            neg[j] = a1[i];
            j++;
        } else if (a1[i] >= 0) {
            pos[k] = a1[i];
            k++;
        }
    }
    
    for (i = 0; i < n; i++) {
        if (i % 2 == 0) {
            if (l < j) {
                a1[i] = neg[l];
                l++;
            }
        } else {
            if (m < k) {
                a1[i] = pos[m];
                m++;
            }
        }
    }

    printf("Alternating positive and negative array: ");
    printArray(a1, n);
    
    return 0;
}
