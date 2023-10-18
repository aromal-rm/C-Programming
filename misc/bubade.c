#include <stdio.h>

void bubblesort(int a[100],int n);
void disp(int a[100],int n);
int main() 
{
    int a[100],i,j,n;
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Enter %d elements\n",n);
    for (i=0;i<n;++i)
    {
        scanf("%d\n",&a[i]);
    }
    printf("Done\n");
    bubblesort(a,n);
    disp(a,n);
    return 0;
}
// Bubble sort Function
void bubblesort(int a[100],int n)
{
    int i,j,temp;
    for (i=0;i<n;++i)
    {
        for (j=0;j<n-i-1;++j)
        {
            if (a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    return;
}
// Displaying elements of a
void disp(int a[100],int n)
{
    int i;
    printf("Displaying sorted a:\n");
    for (i=0;i<n;++i)
    {
        printf("%d",a[i]);
    }
    return;
}