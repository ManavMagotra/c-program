//Title of program
//Write a program using multiplication operator
//Header Files
#include<stdio.h>
//Function Heading
void main() {
//Variable Declaration
    int var1, var2, div;
//Output Statement(prompt)
    printf("enter the two numbers for division\n");
//Input statement
    scanf("%d%d", &var1, &var2);
//Assignment statement
    div= var1/var2;
//Output Statement
    printf("%d/%d=%d", var1, var2,  div);
}
