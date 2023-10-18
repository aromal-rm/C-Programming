#include<stdio.h>
#include<math.h>

int main(void){
    int n,x,i,sum=0;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    printf("Enter the base: ");
    scanf("%d",&x);
    for(i=1;i<=n;i=i+2){
        sum=sum+pow(x,i);
        
    }
    printf("Your sum is %d",sum);
    
}