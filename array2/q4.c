#include<stdio.h>
void getarray(float a[], int *n) {
    int i, st = 0;
    for (i = 0; i < *n; i++) {
        scanf("%f", &a[i]);
        // st = st + a[i];
    }
    return;
}
void printArray(float arr[], int *n) {
    int i;
    for (i = 0; i < *n; i++) {
        printf("%-5.2f", arr[i]);
    }
    printf("\n");
}
int findmean(float b[], int *size){
    int i;
    float sum;
    for(i=0;i<*size;i++){
        sum=sum+b[i];
    }
    sum=sum/(*size);
    return sum;

}
void main(){
    int i,n;
    float a[50];
    printf("Enter the limit of the array: ");
    scanf("%d",&n);
    printf("Enter the %d terms",n);
    getarray(a,&n);
    printArray(a,&n);
    printf("The mena of the elements are: %d",findmean(a,&n));

}