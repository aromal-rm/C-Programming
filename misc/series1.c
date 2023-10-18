#include<stdio.h>
int main(){
    float fpow(float x, int n);
    int facto(int n);
    int i,n;
    float x,sum=0;
    printf("Enter the value of X and N\n");
    scanf("%f%d",&x,&n);
    for(i=1;i<(2*n);i+=2){
        sum=sum+(fpow(x,i))/(facto(i));
    }
    printf("%f",sum);
    return 0;
}
float fpow(float x, int n){
    int i;
    float mypow=1;
    for(i=0;i<n;i++){
        mypow*=x;
    }
    return(mypow);
}
int facto(int n){
    int i, fact=1;
    for(i=1;i<=n;i++){
        fact*=i;
    }
    return (fact);
}
