#include <stdio.h>
#include <math.h>

int main()
{
    float x1, y1, x2, y2;
    float a,b, distance;
    printf("\nEnter the x quadrant of point a:\n");
    scanf("%f", &x1);
     printf("\nEnter the y quadrant of point a:\n");
    scanf("%f", &y1);
    printf("\nEnter the x quadrant of point b :\n");
    scanf("%f", &x2);
    printf("\nEnter the y quadrant of point b:\n");
    scanf("%f", &y2);

    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("The euclidean distance between(%f,%f) and (%f,%f) points is: %f", x1,y1,x2,y2, distance);

    return 0;
}
