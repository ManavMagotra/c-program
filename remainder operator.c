//Title of program
//Write a program using multiplication operator
//Header Files
#include<stdio.h>
//Function Heading
void main() {
//Variable Declaration
    int var1, var2, remainder;
//Output Statement(prompt)
    printf("enter divident and divisor\n");
//Input statement
    scanf("%d%d", &var1, &var2);
//Assignment statement
    remainder= var1%var2;
//Output Statement
    printf("%d/%d remainder=%d", var1, var2, remainder);
}
