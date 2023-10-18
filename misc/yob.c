#include<stdio.h>

int main(){
    int n,i,j,k;
    char a[100],b[100];
    printf("Enter the string");
    gets(a);
    printf("Enter the string to be eliminated");
    gets(b);
    for(i=0;a[i]!='\0';i++){
        if(a[i]==' ' && a[i+1]==' '){
            for(;a[i]!='\0';i++){
                a[i]=a[i+1];
            }
        }
        else{
            for(j=i,k=0;;){
                if(a[j]==b[k]){
                    for(;;){
                        a[j]=a[j+1];
                        b[k]=b[k+1];

                    }
                }
                printf("\n");

            }
        }
    }
return 0;
}
