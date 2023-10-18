#include<stdio.h>
int main(){
    int n,s1,s2,i,j,a[100],k,flag=0;
    printf("Enter the limit: ");
    scanf("%d",&n);
    printf("Enter the numbers: ");
    if(n>1){
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++){
        s1=0;
        s2=0;
        for(j=0;j<=i-1;j++){
                s1=s1+a[j];
        }
        for(k=i+1;k<n;k++){
            s2=s2+a[k];
        }
        if(s1==s2){
            flag=1;
            break;
        }else{
            continue;
        }
    }
    if(flag==1){
        printf("The equilibrium position is %d ",i+1);
    }else if(flag==0){
        printf("No equilibrium positions found");
    }
    }else{
        printf("Invalid input!\nThe input limit should be a valid positive intiger greater than 1!!");
    }
    return 0;
}