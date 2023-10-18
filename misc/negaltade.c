#include <stdio.h>
int main(void)
{
    int a[100],pos[100],neg[100],fin[100],n,i,j,k,n1=0,n2=0;
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Enter elements:\n");
    for (i = 0; i < n; ++i)
    {
        scanf("%d", &a[i]);
    }
    
    for (i = 0; i < n; ++i)
    {
        if (a[i] >= 0)
        {
            pos[n1] = a[i];
            n1++;
        }
        else
        {
            neg[n2] = a[i];
            n2++;
        }
    }

    for (i = 0; i < n2; ++i)
    {
        printf("\n%d", neg[i]);
    }
    
    for (i = 0, j = 0, k = 0; i < n1 || j < n2; ++i, ++j)
    {
        if (j < n2)
        {
            fin[k] = neg[j];
            k++;
        }
        if (i < n1)
        {
            fin[k] = pos[i];
            k++;
        }
    }
    
    printf("\nCombined elements:\n");
    for (i = 0; i < n; ++i)
    {
        printf("%5d", fin[i]);
    }
    return 0;
}