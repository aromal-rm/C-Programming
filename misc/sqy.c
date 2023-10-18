#include<stdio.h>
float mypower(float x,int n){
    float result=1;
    int i;
    for(i=0;i<n;i++){
        result*=x;
    }
    return result;
}
long int squareroot(float sum) {
    long int x_new, x_old, n, sq;
    n = sum;
    x_old = 1;
    x_new = n;

    if (x_old == 0) {
        sq = 0;  // Return 0 if the initial value is 0
    } else {
        while (x_new - x_old >= 0.00001) {
            x_old = x_new;
            x_new = (n + (x_old * x_old)) / (2 * x_old);
        }
        sq = x_new;
    }

    return sq;
}

int main (){
    float mypower(float x,int n);
    long int squareroot(float sum);
    float sum,x,sq;
    int i,n;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    printf("Enter the value of x: ");
    scanf("%d",&x);
    for(i=0;i<n;i++){
        sum=sum+mypower(x,n);
    }
    sq=squareroot(sum);
    printf("The result is %d .",sq);
return 0;
}