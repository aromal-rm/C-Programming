#include <stdio.h>
#include <math.h>
float squareRoot(float n) {
    float res = n; 
    float prec = 0.00001;
    while (1) {
        float temp = res;
        res = (n / res + res) / 2; 
        if (fabs(res - temp) < prec) 
            break;
    }

    return res;
}
float fpow(float x, int n) {
    int i;
    float mypow = 1;
    for (i = 0; i < n; i++) {
        mypow *= x;
    }
    return mypow;
}

int main() {
    float x, sum = 0, res;
    int n, i;
    printf("Enter base and n: ");
    scanf("%f %d", &x, &n);
    for (i = 1; i <= n; i++) {
        sum = sum + fpow(x, i);
    }
    res = squareRoot(sum);
    printf("The square root of the sum is: %f\n", res);
    return 0;
}
