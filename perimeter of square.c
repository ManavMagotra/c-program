#include <stdio.h>

int main()
{
    float side, perimeter;

    printf("Enter the length of the side of the square: ");
    scanf("%f", &side);

    // Calculate the perimeter using the formula
    perimeter = 4 * side;

    printf("The perimeter of the square is: %f\n", perimeter);

    return 0;
}
