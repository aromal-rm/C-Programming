#include <stdio.h>

int main()
{
   int n, i, j;
   printf("Enter n: ");
   scanf("%d", &n);
   for(i=1; i<=n; i++)
   {
       for(j=1; j<=10; j++)
       {
           printf("%d x %d = %d\n", i, j, i*j);
       }
       printf("\n");
   }
   return 0;
}
