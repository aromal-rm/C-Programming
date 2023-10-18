#include <stdio.h>
#include <math.h>

int main() {
    int i, num, digit, sum;
    int start, end;

    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    printf("Armstrong numbers between %d and %d are: ", start, end);

    for(i=start; i<=end; i++) {
        sum = 0;
        num = i;

        while(num != 0) {
            digit = num % 10;
            sum += pow(digit, 3);
            num /= 10;
        }

        if(i == sum) {
            printf("%d ", i);
        }
    }

    return 0;
}