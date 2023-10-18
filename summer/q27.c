#include<stdio.h>
#include<math.h>

int main(void){
    int n,i,sum=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=1;i<=n/2;i++){
        if(n%i==0){
            sum=sum+i;
        }
    }
    if(sum==n){
        printf("The entered number, %d, is a perfect number",n);

    }else{
        printf("The entered number, %d, is not a perfect number",n);
    }
    return 0;
}