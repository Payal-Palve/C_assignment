#include <stdio.h>
#include <stdlib.h>

//pass by value

void circleArea(double radius)
{
  double area = 3.14 * radius * radius;
  printf("The area of the circle is %.2lf\n",area);
  return;
}
int main()
{
  double radius;
  printf("Enter the radius of cicle ");
  scanf("%lf",&radius);
  circleArea(radius);
  return 0;
}