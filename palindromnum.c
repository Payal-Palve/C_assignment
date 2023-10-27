#include <stdio.h>
#include <stdlib.h>

//to check the number is palindrom or not

int main()
{
  int num,temp,rem,rev=0;
  printf("Enter the number:");
  scanf("%d",&num);
  temp=num;

  while(temp>0)
    {
      rem=temp%10;
      rev=rev*10+rem;
      temp=temp/10;
      
    }
  if(num==rev)
    printf("The number  is palindrom");
  else
    printf("The number is not palindrom");
}