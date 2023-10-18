#include<stdio.h>

int main(void){
    int n,fac=1,i;
    printf("Enter the number of which the factorial is to be found:  ");
    scanf("%d",&n);
    if(i<0){
        printf("Enter a valid positive intiger!!");
    }else{
    for(i=1;i<=n;i++){
        fac=fac*i;
    }
    printf("Your required factorial is: %d",fac);
    }
    return 0;
}