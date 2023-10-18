
#include <stdio.h>
int equilibrium(int a[100],int n);
int main(void)
{
    int a[100],n,i,a;
    printf("Enter number of elements");
    scanf("%d",&n);
    printf("Enter elements\n");
    for (i=0;i<n;++i)
    {
        scanf("%d",&a[i]);
    }
    a=equilibrium(a,n);
    
    if (a!= -1)
    {
        printf("The equilibrium point is %d",a);
    }
    else
    {
        printf("No equilibrium point");
    }

}
int equilibrium(int a[100],int n)
{
    int i,leftsum=0, totalsum=0;
    for (i=0;i<n;++i)
    {
        totalsum+=a[i];
    }
    for (i=0;i<n;++i)
    {
        totalsum-=a[i];
        if (totalsum==leftsum)
        {
            return (i+1);
        }
        leftsum+=a[i];
    }
    return -1;
}