#include<stdio.h>

int  main(void){
    int n,i,sum=0,mul=1;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=sum+mul;
        mul=(mul*10)+1;
    }
    sum=sum*9;
    printf("Your sum of the series is: %d",sum);

}