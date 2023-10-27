#include <stdio.h>
#include <math.h>
#include<stdlib.h>

//to print armstrong number

int main()
{
  int num,temp,sum=0,rem,cube;
  printf("Enter a number : ");
  scanf("%d",&num);
  temp=num;
  while(num>0)
    {
      rem=num%10;
      cube=rem*rem*rem;
      sum=sum+cube;
      num=num/10;
    }
  if(sum==temp)
    printf("The number %d is a armstrong number",temp);
  else
    printf("The number %d is not armstrong number",temp);
}