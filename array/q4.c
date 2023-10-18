#include <stdio.h>

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr1[] = {1, 3, 4, 5, 7};
    int arr2[] = {2, 3, 5, 6};
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);

    int unionArr[m + n];
    int unionIndex = 0;

    int i = 0, j = 0;

    while (i < m && j < n) {
        if (arr1[i] < arr2[j]) {
            unionArr[unionIndex++] = arr1[i++];
        } else if (arr2[j] < arr1[i]) {
            unionArr[unionIndex++] = arr2[j++];
        } else {
            unionArr[unionIndex++] = arr1[i];
            i++;
            j++;
        }
    }

    while (i < m) {
        unionArr[unionIndex++] = arr1[i++];
    }

    while (j < n) {
        unionArr[unionIndex++] = arr2[j++];
    }

    printf("Union: ");
    printArray(unionArr, unionIndex);

    return 0;
}
