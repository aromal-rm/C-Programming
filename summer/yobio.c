#include<stdio.h>
#include<math.h>

int main(){
  int n,a,i,j,count,count_2,sum,pdt;
  printf("Enter your number :");
  scanf("%d",&n);
  printf("0");
  a=n;
  if(n>0)
  {
    for(i=0;a>0;a=a/10,i++)
    {}
    a=n;
    for(count=0,sum=0;count<i;count++,a=a/10)
    {
      j=a%10;
      for(count_2=0,pdt=1;count_2<i;count_2++){
        pdt=pdt*j;
      }
      printf("+%d",pdt);
      sum=sum+pdt;
    }
    printf("=%d\n",sum);
  }
  else{
    for(i=0;a<0;a=a/10,i++)
    {}
    a=n;
    for(count=0,sum=0;count<i;count++,a=a/10)
    {
      j=a%10;
      for(count_2=0,pdt=1;count_2<i;count_2++){
        pdt=pdt*j;
      }
      printf("+%d",pdt);
      sum=sum+pdt;
    }
    printf("=%d\n",sum);
  }
  if(n==sum){
    printf("The number is an armstrong number ");
  }
  else{
    printf("Entered number is not armstrong");
  }
return 0;
}