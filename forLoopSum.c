#include <stdio.h>
#include <stdio.h>

//to print sum of n natural number 

int main(){
  int n,sum=0;
  printf("Enter the value of number ");
  scanf("%d",&n);
  for(int i=1;i<=n;i++){
    sum=sum+i;
  }
  printf("sum of natural numbers is %d",sum);
}