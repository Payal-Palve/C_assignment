#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        sum += i;
    }

    printf("Sum of numbers up to %d is %d\n", num, sum);

    return 0;
}