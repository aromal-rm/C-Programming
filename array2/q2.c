#include<stdio.h>
void getmatrix(int a[][10],int *r,int *c){
    int i,j;
    printf("Enter the number of rows and columns: ");
    scanf("%d%d", r, c);
    for (i=0;i<*r;++i){
        printf("Enter the row number %d\n",i+1);
        for (j=0; j <* c ; ++j) {
            scanf("%d",&a[i][j]);
        }
    }
}
int diagsum(int a[][10], int *r, int *c){
    int i,j,sum=0;
    for(i=0;i<*r;i++){
        for(j=0;j<*c;j++){
            if(i==j){
                sum=sum+a[i][j];
            }
        }
    }
    return sum;
}
void showmat(int a[][10], int *r, int*c){
    int i,j;
    for (i=0;i<*r;++i){
        for (j=0; j <* c ; ++j) {
            printf("%5d",a[i][j]);
        }
        printf("\n");
    }
}
void main (){
    int r,c,sum,a[10][10],choice;
    getmatrix(a,&r,&c);
    showmat(a,&r,&c);
    if(r==c){
        printf("Diagonal Sum is: %d\n",diagsum(a,&r,&c));
    }else{
        printf("The matrix is not square do you want to continue!!\n1->Yes\n2->No");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("Diagonal Sum is: %d\n",diagsum(a,&r,&c));
            break;
        default:
            printf("Thank you bei!!! :)")
            break;
        }
    }
    return ;
}