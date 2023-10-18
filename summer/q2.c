#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,sum=0;
	for(i=1;i<=10;i++){
        sum=i+sum;
	}
        printf("%d",sum);

	return EXIT_SUCCESS;
}
