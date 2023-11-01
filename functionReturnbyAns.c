#include <stdio.h>

int addition (int m,int n);
int addition (int m,int n)
{
  int ans;
  ans=m+n;
 return ans;
}
int main()
{
  int a,b,result;
  printf("Enter the two number:");
  scanf("%d %d",&a,&b);
  result = addition(a,b);
printf("Addition of number is %d", result);
  // addition(a,b);
  
 
}

