#include <stdio.h>
#include <stdlib.h>

//function without passing value without return value
void circleArea ();
void circleArea()
{
  float radius,area;
  printf("Enter the radius of circle :");
  scanf("%f",&radius);
  area=3.14*radius * radius;
  printf("Area of cicle is %.2f",area);
  
}
int main()
{
  circleArea();
  return 0;
}
