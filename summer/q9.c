#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n,i,j;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=0;j<i;j++){
			printf("*");
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
