#include <stdio.h>

int main() 
{
   int k=0;
   for (int i =1; i <= 4;i++) 
   {
     
        for (int j = 1; j<=4;j++) 
        {
            k=k+2;
            printf("%d \t", k);
        }
        printf("\n");
   }
   return 0;
}

