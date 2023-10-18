#include <stdio.h>

int main() {
    int i, j, k;
    int ar1[] = {1, 5, 10, 20, 40, 80};
    int ar2[] = {6, 7, 20, 80, 100};
    int ar3[] = {3, 4, 15, 20, 30, 70, 80, 120};

    printf("The common elements are: ");

    i = j = k = 0;
    while (i < sizeof(ar1) / sizeof(int) && j < sizeof(ar2) / sizeof(int) && k < sizeof(ar3) / sizeof(int)) {
        if (ar1[i] == ar2[j] && ar2[j] == ar3[k]) {
            printf("%d ", ar1[i]);
            i++;
            j++;
            k++;
        } else if (ar1[i] < ar2[j]) {
            i++;
        } else if (ar2[j] < ar3[k]) {
            j++;
        } else {
            k++;
        }
    }

    printf("\n");
    return 0;
}
