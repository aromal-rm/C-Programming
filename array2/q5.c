#include<stdio.h>
void getarray(float a[], int *n) {
    int i, st = 0;
    for (i = 0; i < *n; i++) {
        scanf("%f", &a[i]);
        // st = st + a[i];
    }
    return;
}
void find_smallest(float a[], int *n, float *le, int *lp) {
    int i;
    *lp = 0; 
    *le = a[0]; 

    for (i = 1; i < *n; i++) {
        if (a[i] < *le){
            *le = a[i];
            *lp = i+1; 
        }
    }
}

void main(){
    int n,lp;
    float a[50],le;
    printf("Enter the limit: ");
    scanf("%d",&n);
    printf("Enter the %d numbers: ",n);
    getarray(a,&n);
    find_smallest(a,&n,&le,&lp);
    printf("\nThe smallest number is %.2f at position:%d\n", le,lp);
}