#include<stdio.h>
int main(){
    void factorial();
    factorial();
    return 0;
    }
void factorial (){
    int n,i,fact=1;
    printf("Enter the number: ");
    scanf("%d",&n);
    for( i = 2 ; i <= n ; ++i){
        fact *= i;
    }
    printf("\nFactorial of %d is :%d",n,fact) ;
    return ;
}
