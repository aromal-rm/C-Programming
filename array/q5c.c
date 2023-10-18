#include<stdio.h>
int main(){
    int a[50],i,j,n,sum,count=0;
    printf("\nEnter the limit: ");
    scanf("%d",&n);
    printf("\nEnter the %d elements: ",n);
    for(i=0; i<=n-1; ++i){
        scanf("%d", &a[i]);
    }
    printf("\nThe elements are: ");
    for(i=0;i<n;i++){
        printf("%-5d",a[i]);
    }
    printf("Enter the sum: ");
    scanf("%d",&sum);
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if((a[i]+a[j])==sum){
            count++;
            }else{
                continue;
            }
        }
    }
    printf("The number of pairs with sum=%d is: %d",sum,count);
}   