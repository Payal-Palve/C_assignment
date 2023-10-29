#include <stdio.h>

int main() 
{
  int i,j;
  for(i=1;i<=5;i++)
    {
      char printChar= 'A';
      for(j=1;j<=i;j++)
        {
          printf("%c\t",printChar);
          printChar ++;
        }
      printf("\n");
    }
}

