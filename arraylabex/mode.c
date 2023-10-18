#include<stdio.h>

void getarray(int a[], int *n) {
    int i, st = 0;
    for (i = 0; i < *n; i++) {
        scanf("%d", &a[i]);
        // st = st + a[i];
    }
    return;
}
int main(){
    int i,n,j,a[50],ct1=0,ct2=0,mode;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the %d terms",n);
    getarray(a,&n);
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                ct2++;
                
                continue;
            }
        }
        if(ct2>ct1){
            ct1=ct2;
            mode=i;
        }
    }
    printf("The mode is: %d",a[mode]);
}