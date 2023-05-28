#include <stdio.h>

int main() {
    int number,remainder, sum=0;

    printf("\n please enter any number\n ");
    scanf("%d", &number);

    while (number > 0) {
        remainder = number % 10;
        sum= sum + remainder ;
        number = number/10;
    }

    printf("Sum of the digits of given number= %d", sum);

    return 0;
}
