#include <stdio.h>
#include <stdlib.h>

//to calculate even and odd number from 1 to 100

int main()
{
  int i,evenSum=0,oddSum=0,evenCount=0,oddCount=0;
  for(i=1;i<=100;i++)
    {
      if(i%2==0)
      {
        evenSum+=i; //sum
        evenCount++; //count
      }
      else
      {
        oddSum+=i; //sum
        oddCount++; //count
      }
    }
  printf("The sum of even number is %d \n",evenSum);
  printf("The sum of odd number is %d \n",oddSum);
   printf("The count of even number is %d \n",evenCount);
   printf("The count of odd number is %d \n",oddCount);
}