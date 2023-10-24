// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>

int main(){
 int a,b,temp;
printf("Enter the value of a : ");
  scanf("%d",&a);
  printf("Enter the value of b : ");
  scanf("%d",&b);
  temp=a;
a=b;
 b=temp;
printf("After swapping, the value of a is %d and the value of b is %d", a,b);

  //without using external variable

  a=a+b;
  b=a-b;
  a=a-b;

  printf("%d the value of a \n",a );
  printf("%d the value of b",b);
}