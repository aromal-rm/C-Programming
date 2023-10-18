#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float avg,i,sum=0,count=1;
    printf("Enter 10 numbers:");
	while(count<=10){
        scanf("%f",&i);
        sum=i+sum;
        avg=sum/10;
        count=count+1;
	}
    printf("Your sum is, %f",sum);
    printf("\nYour average is, %f",avg);
	return EXIT_SUCCESS;
}
