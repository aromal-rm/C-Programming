#include<stdio.h>
int main(){
    int a,r,n,s,sum;
    printf("Enter the 1st term of the series: ");
    scanf("%d",&a);
    printf("Enter the common difference: ");
    scanf("%d",&r);
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    sum=((n/2)*((2*a)+((n-1)*r)));
    printf("The sum of the sequence is: %d",sum);
    return 0;
}