#include <stdio.h>

int getarray(int a[], int *n) {
    int i, st = 0;
    for (i = 0; i < *n; i++) {
        scanf("%d", &a[i]);
        st = st + a[i];
    }
    return st;
}

int main() {
    int i, a[50], n, st, sl = 0, sr;
    printf("Enter the limit of the array: \n");
    scanf("%d", &n);
    printf("Enter the %d numbers\n", n);
    st = getarray(a, &n);
    // printf("%d\n", st);
    for (i = 0; i < n; i++) {
        sr = st - sl - a[i];
        if (sl == sr) {
            printf("%d is the equilibrium point in the array with sum in each side = %d\n", a[i],sr);
            // break;
            continue;
        }
        sl = sl + a[i];
    }
    return 0;
}
