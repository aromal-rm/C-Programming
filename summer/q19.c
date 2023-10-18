#include<stdio.h>

int main(void){
    int n;
    float i,div,sum=0;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        div=1/i;
        sum=sum+div;
        printf("(1/%.0f)",i);
        if(i<n){
            printf("+");
        }
    }
    printf("= %f",sum);
}
