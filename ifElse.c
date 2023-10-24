#include <stdio.h>

int main(){
  int balance = 30000, withdrawAmt;
  printf("Enter the withdraw amount:");
  scanf("%d",&withdrawAmt);
  if(withdrawAmt > balance)
  {
    printf("sorry..........insfficent balance");
  }
  else
  {
printf("You can withdraw money");
  }
}