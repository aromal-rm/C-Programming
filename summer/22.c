#include<stdio.h>
#include<math.h>

int main(void){
    int i,a=5 ;
        for(i=2;i<=sqrt(a);i++){
        if(a%i!=0){
            printf("The entered number is not a prime number");
        }else{
            printf("The entered number is a prime number");
        }
    }

}   