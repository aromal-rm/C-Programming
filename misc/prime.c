#include<stdio.h>
#include<math.h>
int primecheck(int n){
    int i,flag=0;
    // if(n<1){
    //     // printf("enter valid positive intiger greater than 0");
    //     return 0;
    // }
    // else if (n==1){
    //     // printf("1 is neither prime nor ");
	//     return 0;
    // }
    // else{
        for(i=2; i<=sqrt(n); ++i)
        {
            if(n%i==0){
                // printf("The number is not prime!!");
                return 0;
            }else{
                continue;
                
            }
        }
        // printf("The no is prime");
        flag=1;

    return (flag);
}
int main(){
    int n,i,org,flag;
    printf("Enter the number: ");
    scanf("%d",&n);
    org = n;
    printf("The prime factors are: ");
    for(i=2;i<n;i++){
        flag=primecheck(i);
        if(flag==1){
            if(n%i==0){
                printf("\n%d",i);
            }
        }
    }
    return 0;
}