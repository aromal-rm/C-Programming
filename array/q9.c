#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void rearrangeArray(int arr[], int n) {
    int i, j;
    
    // Rearrange positive and negative elements
    i = -1;
    for (j = 0; j < n; j++) {
        if (arr[j] < 0) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    // Rearrange alternate positive and negative elements
    int pos = i + 1, neg = 0;
    while (pos < n && neg < pos && arr[neg] < 0) {
        swap(&arr[neg], &arr[pos]);
        pos++;
        neg += 2;
    }
}

void printArray(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr1[] = {1, 2, 3, -4, -1, 4};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    
    printf("Input array 1: ");
    printArray(arr1, n1);
    
    rearrangeArray(arr1, n1);
    
    printf("Output array 1: ");
    printArray(arr1, n1);
    
    int arr2[] = {-5, -2, 5, 2, 4, 7, 1, 8, 0, -8};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    
    printf("Input array 2: ");
    printArray(arr2, n2);
    
    rearrangeArray(arr2, n2);
    
    printf("Output array 2: ");
    printArray(arr2, n2);
    
    return 0;
}
