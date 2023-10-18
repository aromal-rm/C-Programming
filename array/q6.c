#include<stdio.h>
int main(){
    int i,j,k,max,n1,n2,n3;
    int a1[] = {1, 5, 10, 20, 40, 80} ;
    int a2[] = {6, 7, 20, 80, 100} ;
    int a3[] = {3, 4, 15, 20, 30, 70, 80, 120};

    n1=(sizeof(a1))/4;
    n2=(sizeof(a2))/4;
    n3=(sizeof(a3))/4;
    max= n1 > n2 ? (n1 > n3 ? n1 : n3) : (n2 > n3 ? n2 : n3);
    printf("The common elements are: ");
    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
            if(a1[i]==a2[j]){
                for(k=0;k<n3;k++){
                    if(a2[j]==a3[k]){
                        printf("\n%d",a3[k]);
                    }else{
                        continue;
                    }
                }
            }else{
                continue;
                
            }
        }
    }
    return 0;
}