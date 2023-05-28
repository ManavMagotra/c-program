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
    a=(x2-x1)*(x2-x1);
    b=(y2-y1)*(y2-y1);
    distance=sqrt(a+b);
    printf("The distance between the given points is  %f",distance);

    return 0;
}
