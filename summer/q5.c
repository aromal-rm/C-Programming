#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int cube,i,count=1;
    printf("Enter an intiger:");
    scanf("%d",&i);
	while(count<=i){
        cube=count*count*count;
        printf("%d\n",cube);
        count=count+1;
	}

	return 0;
}
