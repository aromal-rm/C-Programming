#include<stdio.h>

int main(void){
    int n,i,sq,sum=0;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    printf("The squares of natural numbers are: ");
    for(i=1;i<=n;i++){
        sq=i*i;
        printf("%d, ",sq);
        sum=sum+sq; 
    }
    printf("\nYour sum is: %d",sum);
}