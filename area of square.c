#include <stdio.h>

int main()
{
    float side, area;

    printf("Enter the length of the side of the square: ");
    scanf("%f", &side);

    // Calculate the area using the formula
    area = side * side;

    printf("The area of the square is: %f\n", area);

    return 0;
}
