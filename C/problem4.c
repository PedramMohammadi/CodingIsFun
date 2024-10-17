/*
This program swaps the values of two variables that are entered by the user.
We assume user always enters correct input. This code swaps the place of two 
variables without using a temporary variable.
*/

#include <stdio.h>

int main()
{
    int x = 0, y = 0;
    printf("Enter value of X: ");
    scanf("%d", &x);
    printf("Enter value of Y: ");
    scanf("%d", &y);
    x = x + y;
    y = x - y;
    x = x - y;
    printf("\nAfter swapping: X = %d, Y = %d\n", x, y);
    return 1;
}