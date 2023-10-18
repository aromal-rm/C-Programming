#include<stdio.h>

int main(void)
{
    int n,n1,n2,i,j,dig,sum=0,fact;
    printf("Enter the smaller number:");
    scanf(" %d",&n1);
    printf("Enter the larger number:");
    scanf(" %d",&n2);
    
    for(n=n1;n<=n2;n++,sum=0)
    {
        for(i=n;i>0;i=i/10)
        {
            dig=i%10;
            for(j=dig,fact=1;j>0;j--)
            {
                fact=fact*j;
            }
            sum=sum+fact;
        }
    
    if(sum==n)
    {
        printf("The strong numbers in the range are:  %d\n",n);
    }
    }
    return 0;
}