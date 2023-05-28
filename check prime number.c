#include <stdio.h>

int main() {
    int i, n = 2, a ,prime=0;
    printf("\nEnter the number:");
    scanf("%d", &i);

    while (n<1)
    {
        if (i%n==0)
        {
          prime++;
        }
        n++;
     }
     if(prime==0)
     {
         printf("\n this number is prime ");
     }
     else
     {
         printf("this number is not prime");
     }
     return 0;
}
