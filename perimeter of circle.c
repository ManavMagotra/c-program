#include <stdio.h>
#define PI 3.14159

int main()
{
    float radius, perimeter;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate the perimeter using the formula
    perimeter = 2 * PI * radius;

    printf("The perimeter of the circle is: %f\n", perimeter);

    return 0;
}
