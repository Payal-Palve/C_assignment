#include <stdio.h>

int main() {
    float side1, side2, side3;

    printf("Enter three sides of the triangle: ");
    scanf("%f %f %f", &side1, &side2, &side3);

    if(side1 == side2 && side2 == side3) {
        printf("The triangle is equilateral");
    } else if(side1 == side2 || side2 == side3 || side1 == side3) {
        printf("The triangle is isosceles");
    } else {
        printf("The triangle is neither equilateral nor isosceles");
    }

    return 0;
}