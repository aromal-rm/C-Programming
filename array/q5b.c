#include<stdio.h>
int main(){
    int a[100],n,i,temp;
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
    temp=a[n-1];
    printf("\nLast ele is %d",temp);
    for(i=n-1;i>0;i--){
        a[i]=a[i-1];
    }
    a[0]=temp;
    printf("\nThe elements are: ");
    for(i=0;i<n;i++){
        printf("%-5d",a[i]);
    }
}