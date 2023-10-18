#include<stdio.h>

int main(void){
    int n,i,sum=2;
    printf("Enter the nth term: ");
    scanf("%d",&n);
    printf("0 + 2 ");
    for(i=4;i<=n;i=i+2){
        sum=sum+i;
        printf("+ %d ",i);
    }
    printf("= %d",sum);
    return 0;
}