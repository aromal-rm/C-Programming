#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int value;
    size_t index;
} ElementInfo;

void readArray(int *a, size_t *n);
void findHigh(int *a, size_t *n, ElementInfo *high);
void findLow(int *a, size_t *n, ElementInfo *low);

int main(void) {
    size_t n;
    int *a;
    ElementInfo high, low;

    printf("Enter the limit of the array: ");
    if (scanf("%zu", &n) != 1 || n == 0) {
        printf("Invalid input. Exiting...\n");
        return 1;
    }

    a = malloc(n * sizeof(int));
    if (a == NULL) {
        printf("Memory allocation failed. Exiting...\n");
        return 1;
    }

    readArray(a, &n);
    findHigh(a, &n, &high);
    findLow(a, &n, &low);

    printf("The highest element in the array is: %d in the position: %zu\n", high.value, high.index + 1);
    printf("The lowest element in the array is: %d in the position: %zu\n", low.value, low.index + 1);

    free(a);
    return 0;
}

void readArray(int *a, size_t *n) {
    printf("Enter %zu elements: ", *n);

    for (size_t i = 0; i < *n; ++i) {
        scanf("%d", &a[i]);
    }
}

void findHigh(int *a, size_t *n, ElementInfo *high) {
    high->value = a[0];
    high->index = 0;

    for (size_t i = 1; i < *n; i++) {
        if (a[i] > high->value) {
            high->value = a[i];
            high->index = i;
        }
    }
}

void findLow(int *a, size_t *n, ElementInfo *low) {
    low->value = a[0];
    low->index = 0;

    for (size_t i = 1; i < *n; i++) {
        if (a[i] < low->value) {
            low->value = a[i];
            low->index = i;
        }
    }
}
