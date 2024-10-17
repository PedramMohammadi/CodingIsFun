/*
This program asks the user for a positive integer and then computes its factorial.
We assume that user inputs the correct number.
*/

#include <stdio.h>

int main()
{
    int num = 0, counter = 0, result = 1;
    printf("Please enter a positive integer: ");
    scanf("%d", &num);
    counter = num;
    while (counter != 0)
    {
        result *= counter;
        counter --;
    }
    printf("Factorial of %d is %d\n", num, result);
    return 1;
}