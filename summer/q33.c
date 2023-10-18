#include <stdio.h>

int main()
{
    int n,c=1,space,i,j;
    printf("Input number of rows: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(space=1;space<=n-i;space++)
        printf("  ");
        for(j=0;j<=i;j++)
        {
            if (j==0||i==0)
                c=1;
            else
               c=c*(i-j+1)/j;
            printf("% 4d",c);
        }
        printf("\n");
    }
    return 0;
}
