#include<stdio.h>
void getarr(int a[],int n){
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    return;
}
void disp(int a[100], int n) {
    int i;
    printf("Displaying sorted array:\n");
    for (i = 0; i < n; ++i) {
        printf("%d ", a[i]);
    }
}
void bubblesort(int a[100], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; ++i) {
        for (j = 0; j < n - i - 1; ++j) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
int main(){
    int n,a[100],fc,i,j,ct=0,fg=0;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the elements: ");
    getarr(a,n);
    bubblesort(a,n);
    disp(a,n);
    printf("Enter the number of which frequency is to be tested: ");
    scanf("%d",&fc);
    for(i=0;i<n;i++){
        if(a[i]==fc){
            j=i;
            while(a[j]==fc){
                ct++;
                j++;
            }
            fg=1;
            break;
        }else{
            continue;
        }
        if(fg==1){
            break;
        }
    }
    printf("The frequency of %d is %d!!",fc,ct);
    return 0;
}