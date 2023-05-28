#include <stdio.h>

int main() {
    int i, factorial = 1,number;

    printf("Enter a number: ");
    scanf("%d", &number);

    for(int i = 1; i <= number; i++) {
        factorial= factorial*i;
    }

    printf("Factorial of %d is %d", num, factorial);

    return 0;
}
