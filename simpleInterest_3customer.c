#include <stdio.h>
#include <stdlib.h>

int main()
{
  float principal,rate,time,interest;

  for(int i=1;i<=3;i++)
    {
      printf("Enter principal amount: ");
      scanf("%f",&principal);
      printf("Enter rate of interest: ");
      scanf("%f",&rate);
      printf("Enter time period in years: ");
      scanf("%f",&time);
      interest=principal*rate*time/100;
      printf("The simple interest of customer %d is %0.2f\n\n",i,interest);
      
    }
  
}