#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *link;
}nodes;
nodes *s=NULL,*c=NULL;
void createlink(){
    nodes *n=NULL;
    int cont=1;
    s=(nodes*)malloc(sizeof(nodes));
    printf("Enter the data: ");
    scanf("%d",&s->data);
    s->link=NULL;
    c=s;
    while(cont==1){
        n=(nodes*)malloc(sizeof(nodes));
        printf("\nEnter the next element of link list: ");
        scanf("%d",&n->data);
        n->link=NULL;
        c->link=n;
        c=c->link;
        printf("\nDo you want to enter another element? (0/1):");
        scanf("%d", &cont);
    }
    
}
void display(){
    nodes *c=NULL;
    c=s;
    while(c!=NULL){
        printf("%d \n",c->data);
        c=c->link;
    }
}
int main(){
    int choice;
    
    int contin=1;
    while(contin==1){
        printf("1)Create\n2)Insert\n3)Reverse\n4)Sort\n5)Delete\n6)Display");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            createlink();
            break;
            // case 2:
            // insertnode();
            // break;
            // case 3:
            // reverselist();
            // break;
            // case 4:
            // sortlist();
            // break;
            // case 5:delete();
            // break;
            case 6:
            display();
            break;
        }
        printf("Do you want to continue?(0/1)");
        scanf("%d",&contin);
    }
}