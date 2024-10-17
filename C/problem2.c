/*
This program gets two integers from the user and return their sum.
We assume the user always enters two integers separated by a comma.
*/

#include <stdio.h>

int main()
{
    int num1 = 0, num2 = 0; //Initializing the two integers
    printf("Please enter two integers: ");
    scanf("%d %d", &num1, &num2);
    printf("Sum of %d and %d is %d\n", num1, num2, num1 + num2);
    return 1;
}