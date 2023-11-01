#include <stdio.h>
#include <stdlib.h>

int main()
{
  int choice, a,b,result;
  char ch;
  float div;
  do{
    printf("1-add\n2-sub\n3-mul\ndiv\nexit\n");
    printf("enter the choice");
    scanf("%d",&choice);
    switch(choice)
      {
        case 1:printf("Enter two num");
               scanf("%d %d",&a,&b);
              result=a+b;
              printf("result=%d",result);
        
        case 2:printf("Enter two num");
                scanf("%d %d",&a,&b);
               result=a-b;
               printf("result=%d",result);
        case 3:printf("Enter two num");
         scanf("%d %d",&a,&b);
        result=a*b;
        printf("result=%d",result);
        case 4:printf("Enter two num");
         scanf("%d %d",&a,&b);
        result=a/b;
        printf("result=%d",result);
        case 5:exit(0);
        default:printf("invlaid input");

        

        
      }
    fflush(stdin);
    printf("do you want to continue(y/n)");
    scanf("%c",&ch);
    
  }while(ch=='y');

}