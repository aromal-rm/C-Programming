#include<stdio.h>
void getarray(int a[], int *n) {
    int i, st = 0;
    for (i = 0; i < *n; i++) {
        scanf("%d", &a[i]);
        // st = st + a[i];
    }
    return;
}
void leadcheck(int a[], int n){
    int i,j,flag=0;
    printf("The leading elemetns are: ");
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
             if(a[i]>a[j]){
                flag=1;
                continue;
            }
            else{
                flag=0;
                break;
            }
        }
        if(flag==1){
            printf("%d\n",a[i]);
        }else{
            continue;
        }
    }
}
int main(){
    int n,a[10];
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the %d terms",n);
    getarray(a,&n);
    leadcheck(a,n);
}