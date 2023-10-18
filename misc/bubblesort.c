#include<stdio.h>

int main(){
    int getarr(int a[]);
    void bubble(int a[],int n);
    void disparr(int a[],int n);
    int a[100],n;
    n=getarr(a);
    bubble(a,n);
    disparr(a,n);
    return 0;
}

int getarr(int a[]){
    int i,j,n;
    printf("Enter the limit of the array: ");
    scanf("%d",&n);
    printf("Enter the %d numbers: ", n);
    for(i=0;i<n;++i){
        scanf("%d",&a[i]);
    }
    return(n);
}

void bubble(int a[],int n){
    int i,j,temp;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }else{
                continue;
            }
        }
    }
    return;
}

void disparr(int a[],int n){
    int i;
    printf("Your array is:");
    for(i=0;i<n;i++){
        printf("\n%d",a[i]);
    }
    return ;
}
