#include<stdio.h>

int main() {
    int i, j, k;
    int a1[] = {1, 5, 10, 20, 40, 80};
    int a2[] = {6, 7, 20, 80, 100};
    int a3[] = {3, 4, 15, 20, 30, 70, 80, 120};
    
    int n1 = sizeof(a1) / sizeof(a1[0]);
    int n2 = sizeof(a2) / sizeof(a2[0]);
    int n3 = sizeof(a3) / sizeof(a3[0]);

    printf("The common elements are: ");
    
    i = j = k = 0;
    
    while (i < n1 && j < n2 && k < n3) {
        if (a1[i] == a2[j] && a2[j] == a3[k]) {
            printf("%d ", a1[i]);
            i++;
            j++;
            k++;
        } else if (a1[i] < a2[j]) {
            i++;
        } else if (a2[j] < a3[k]) {
            j++;
        } else {
            k++;
        }
    }

    return 0;
}
