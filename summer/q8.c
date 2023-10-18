#include<stdio.h>
int main(){
    int i, sum, n;
    printf("Enter the number of terms");
    scanf("%d",&n);
    printf("The 1st %d odd numbers are: ",n);
    for(i=1;i<=2*n;i++){
        if(i%2!=0){
            sum+=i;
            printf("\n%d",i);
        }
    }
    printf("The sum of the 1st %d odd numbbers is: %d",n,sum);
    return 0;
}