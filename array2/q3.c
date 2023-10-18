#include<stdio.h>
void getmatrix(float a[][10],int *r,int *c){
    int i,j;
    printf("Enter the number of rows and columns: ");
    scanf("%d%d", r, c);
    for (i=0;i<*r;++i){
        printf("Enter the row number %d\n",i+1);
        for (j=0; j <* c ; ++j) {
            scanf("%f",&a[i][j]);
        }
    }
}
void showmat(float a[][10], int *r, int*c){
    int i,j;
    for (i=0;i<*r;++i){
        for (j=0; j <* c ; ++j) {
            printf("%-7.2f",a[i][j]);
        }
        printf("\n\n");
    }
}
void n0count (float a[][10], int *r, int *c, int *count){
    int i,j;
    *count=0;
    for(i=0;i<*r;i++){
        for(j=0;j<*c;j++){
            if(a[i][j]!=0){
                (*count)++;
            }
        }
    }
}
void main(){
    int r,c,count;
    float a[10][10];
    getmatrix(a,&r,&c);
    showmat(a,&r,&c);
    n0count(a,&r,&c,&count);
    printf("The no of non 0 elements: %d", count);

}