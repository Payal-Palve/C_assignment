#include <stdio.h>
#include <stdlib.h>

void swapping (int *,int *);
void swapping (int * m,int *n)

{
  int temp;
  temp = *m;
  *m = *n;
  *n= temp;
}
int main()
{
  int a, b;
  printf("Enter values for a and b\n");
  scanf("%d %d",&a,&b);
  printf("Before swapping a=%d and b=%d\n",a,b);
  swapping(&a,&b);
  printf("After swapping a=%d and b=%d\n",a,b);
}