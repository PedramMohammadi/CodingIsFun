/*
This program calculates the compund interest over time.
Input is the principal, time, and the rate. Output is 
compound interest value.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int principal = 0, time = 0;
    float rate = 0.0, result = 0.0;
    printf("Enter Principal (amount): ");
    scanf("%d", &principal);
    printf("Enter Time: ");
    scanf("%d", &time);
    printf("Enter Rate: ");
    scanf("%f", &rate);
    result = principal * pow((1 + rate / 100), time);
    printf("Compound interest is: %.6f\n", result - principal);
    return 1;
}