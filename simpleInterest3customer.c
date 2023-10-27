#include <stdio.h>
#include <stdlib.h>

//to print 3 customer simple interest

int main()
{
  //customer 1
  float principal_1=100000;
  float rate_1 =5;
  float time_1=2;
  float simpleInterest_1=(principal_1*rate_1*time_1)/100;
  printf("The simple interest for customer 1 is %2f \n",simpleInterest_1);

  //customer 2
  float principal_2=280000;
  float rate_2 =3;
  float time_2=5;
  float simpleInterest_2=(principal_2*rate_2*time_2)/100;
  printf("The simple interest for customer 2 is %2f \n",simpleInterest_2);

  //customer 3
  float principal_3=780000;
  float rate_3 =7;
  float time_3=8;
  float simpleInterest_3=(principal_3*rate_3*time_3)/100;
  printf("The simple interest for customer 1 is %2f\n ",simpleInterest_3);
}