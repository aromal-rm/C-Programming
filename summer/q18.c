    #include <stdio.h>
    #include <math.h>

    int main()
    {
    int i, n, fact = 1, sign = 1;
    float x, sum = 1;

    printf("Enter the value of x: ");
    scanf("%f", &x);

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i += 2)
    {
        fact *= i * (i - 1);
        sum += sign * pow(x, i) / fact;
        sign = -sign;
    }

    printf("The sum of the series is %.2f", sum);

    return 0;
    }