#include<stdio.h>
int main(){
    int n, rev, i, temp;
    printf("Enter the number: ");
    scanf("%d",&n);
    while(n>=1){
        temp = n%10;
        rev = rev*10 + temp;
        n=n/10;
    }
    printf("Reverse of the number is %d",rev);
}