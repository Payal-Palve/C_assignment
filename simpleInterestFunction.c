#include <stdio.h>
#include <stdlib.h>


//retur by answer
int simpleInterest(int principal,int time,float rate)
{
  float interest= (principal*rate*time)/100;
  return interest;
  
 
}
int main()
{
 int principal,time,answer;
  float rate;
printf("Enter the principal amount:");
  scanf("%d",&principal);
printf("Enter the time in years :");
  scanf("%d",&time);
printf("Enter the rate :");
  scanf("%f",&rate);
  answer=simpleInterest(principal,time,rate);
  printf("The simple interest is %d",answer);
  return 0;
  
}