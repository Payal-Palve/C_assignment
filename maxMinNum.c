#include <stdio.h>
#include <stdlib.h>

int main(){
  int a,b;
  printf("Enter the value of a and b");
  scanf("%d %d",&a ,&b);
  if(a>b){
    printf("a is greater than b");
  }
  else if(a<b){
    printf("b is greater than a");
  }
  else{
  printf("a is equal to b");  
  }
  return 0;
  
}