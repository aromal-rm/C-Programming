#include<stdio.h>
int main(){
    int rev(int n);
    int n1,n2,sum=0;
    printf("\nEnter 2 numbers: ");
    scanf("%d%d",&n1,&n2);
    sum=rev(n1)+rev(n2);
    printf("\nThe sum of the reversed numbers are %d\n",sum);
    return 0;
}
int rev(int n){
    int i,dig,revn=0,org;
    org=n;
    while(n>=1){
        dig=n%10;
        revn=(revn*10)+dig;
        n/=10;
    }
    printf("\nThe reverse of %d is %d\n",org,revn);
    return(revn);
}
