#include <stdio.h>
#include <stdlib.h>

//function with passing value without return value
void circleArea (float r);
void circleArea(float r)
{
  float area;
  area = 3.14 * r* r;
  printf("Area of cicle is %.2f",area);
  
}
int main()
{
  float radius;
  printf("Enter the radius of circle :");
  scanf("%f",&radius);
  circleArea(radius);
  return 0;
}
