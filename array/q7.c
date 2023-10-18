#include<stdio.h>
int main(){
    int n,i,j,a[30],flag=0;
    printf("Enter the limit: ");
    scanf("%d",&n);
    printf("Enter the %d numbers: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0; i<n ; ++i){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
            flag=1;
            break;
            }else{
            continue;
            }
        }
        if(flag==1){
            break;
        }else{
            continue;
        }
    }
    if (flag == 1) {
        printf("\nDuplicate number found at %d and %d and is %d",i+1,j+1,a[i]);
    }else{
        printf("\nNo duplicate element");
    }
    return 0;
}