#include <stdio.h>

int main()
{
    float length, breadth, perimeter;

    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &breadth);

    // Calculate the perimeter using the formula
    perimeter = 2 * (length + breadth);

    printf("The perimeter of the rectangle is: %f\n", perimeter);

    return 0;
}
