#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int mul,i,count=1;
    printf("Enter an intiger:");
    scanf("%d",&i);
    while(count<=10) {
        mul=i*count;
        printf("%d x %d = %d\n",i,count,mul);
        count=count+1;
    }

	return 0;
}