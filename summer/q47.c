#include<stdio.h>
#include<math.h>
int main(){
    int a,r,n,s,sum;
    printf("Enter the 1st term of the series: ");
    scanf("%d",&a);
    printf("Enter the common ratio: ");
    scanf("%d",&r);
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    sum=(a*(pow(r,n)-1))/(r-1);
    printf("The sum of the sequence is: %d",sum);
    return 0;
}