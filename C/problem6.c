/*
This program asks the user for an integer and determines whether that number is even or odd.
We alsways assume user inputs a correct number. 
*/

#include <stdio.h>

int main()
{
    int num = 0;
    printf("Please enter an integer: ");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("%d is even", num);
    }
    else
    {
        printf("%d is odd", num);
    }
    return 1;
}