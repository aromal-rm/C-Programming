#include <stdio.h>

int main(void) {
	int n,i,j,m=1,space;
	printf("Enter the number of rows:");
	scanf("%d",&n);
	for(i=1;i<=n;i=i+2){
      for(space=n;space>=i;space--){
         printf(" ");
      }
		for(j=1;j<=i;j++){

            printf(" *");
            
		}
		printf("\n");
	}   
	return 0;
}