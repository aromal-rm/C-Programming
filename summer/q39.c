#include<stdio.h>
int main(){
    int strt=100,end=200,sum=0;
    printf("The numbers divisible by 9 between 100 and 200 are: ");
    while(end>=strt){
        if(strt%9==0){
            sum=sum+strt;
            printf("\n%d",strt);
        }
        strt++;
    }
    printf("The sum of the numbers divisible by 9 between 100 and 200 is: %d",sum);
    return 0;
}