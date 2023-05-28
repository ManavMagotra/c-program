#include <stdio.h>

int main() {
    int choice;
    float area;
    float length, breadth, side, radius;

    printf("** Menu for area of figures **");
    printf("\n 1.circle");
    printf("\n 2.square");
    printf("\n 3.rectangle");
    printf("\n which area do you want to calculate?\n enter your choice:");
    scanf("%d", &choice);

    if(choice==1) {
            printf("Enter the radius of the circle: ");
            scanf("%f", &radius);
            area = 3.14159 * radius * radius;
            printf("Area of the circle is :%f", area);
    }

    else if(choice==1) {
            printf("Enter the side of the square: ");
            scanf("%f", &side);
            area = side*side;
            printf("Area of the square is: %f", area);
    }

    else if (choice==2)  {
            printf("Enter the length and breadth of the rectangle: ");
            scanf("%f %f", &length, &breadth);
            area = length * breadth;
            printf("Area of the rectangle is:%f", area);
    }

    else {
            printf("\nenter the correct  choice");
    }

    return 0;
}
