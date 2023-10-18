#include <stdio.h>

int main(void) {
	int n,i,j,m=1;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){

		for(j=1;j<=i;j++){
            
            printf("%d ",m++);
            
		}
		printf("\n");
	}   
	return 0;
}