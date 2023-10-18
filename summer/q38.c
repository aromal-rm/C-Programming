#include<stdio.h>
int main(){
    int n, org, rev, i, temp;
    printf("Enter the number: ");
    scanf("%d",&n);
    org=n;
    while(n>=1){
        temp = n%10;
        rev = rev*10 + temp;
        n=n/10;
    }
    if(org==rev){
        printf("The number is palindrome");
    }else{
        printf("The number is not palindrome");
    }
    return 0;
}