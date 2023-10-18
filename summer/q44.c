#include <stdio.h>

int main() {
    int n, org, i, fac, sum, dig;

    printf("Enter the number: ");
    scanf("%d", &n);

    org = n;
    sum = 0;

    while (n > 0) {
        dig = n % 10;
        i = 1;
        fac = 1;

        while (i <= dig) {
            fac *= i;
            i++;
        }

        sum += fac;
        n /= 10;
    }

    if (sum == org) {
        printf("The number is a strong number!\n");
    } else {
        printf("The number is not a strong number.\n");
    }

    return 0;
}
