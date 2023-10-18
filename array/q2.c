#include<stdio.h>
void getarray(int a[],int n){
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
}
void leadcheck(int a[],int n){
    int i,j,lead,flag=0;
    printf("The leading elements are: ");
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                flag=1;
                continue;
            }else{
                flag=0;
                break;
            }
        }
        if(flag==1){
            printf("%d, ",a[i]);
        }else{
            continue;
        }
    }
    // printf("\b\b\b");
    return;
}
int main(){
    int a[50],n;
    printf("Enter the limit of the array: ");
    scanf("%d",&n);
    printf("Enter the %d terms.\n",n);
    getarray(a,n);
    leadcheck(a,n);
}