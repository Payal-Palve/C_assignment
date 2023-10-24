# include <stdio.h>

int main(){
  int a;
  printf("Enter a number");
  scanf("%d",&a);
  if(a%2==0){
    printf("The %d is an even number",a);
  }
  else{
    printf("The %d is odd number");
  }
}

