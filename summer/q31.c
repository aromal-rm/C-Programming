#include <stdio.h>
#include <math.h>

int main(void) {
	float n,i,j,m,space;
	printf("Enter the number of rows:");
	scanf("%f",&m);
    n=ceilf(m/2);
    	for(i=1;i<=n;i++){
      for(space=n;space>=i;space--){
         printf(" ");
      }

		for(j=1;j<=i;j++){

            printf("* ");
            
		}
		printf("\n");
	}
	for(i=1;i<=n;i++){
      for(space=1;space<=i;space++){
         printf(" ");
      }
        for(j=n-1;j>=i;j--){

            printf(" *");
            
		}
		printf("\n");
	}   

	return 0;
}