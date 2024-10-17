/*
This program implements a simple calculator.
*/

#include <stdio.h>

int main()
{
    char operator;
    float num1 = 0.0, num2 = 0.0, result = 0.0;
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);
    printf("Enter operand 1: ");
    scanf("%f", &num1);
    printf("Enter operand 2: ");
    scanf("%f", &num2);
    if (operator == '+')
    {
        result = num1 + num2;
        printf("%f %c %f is: %f\n", num1, operator, num2, result);
    }
    else if (operator == '-')
    {
        result = num1 - num2;
        printf("%f %c %f is: %f\n", num1, operator, num2, result);
    }
    else if (operator == '*')
    {
        result = num1 * num2;
        printf("%f %c %f is: %f\n", num1, operator, num2, result);
    }
    else
    {
        if (num2 == 0)
        {
            printf("Cannot divide by zero!\n");
        }
        else
        {
            result = num1 / num2;
            printf("%f %c %f is: %f\n", num1, operator, num2, result);
        }
    }
    return 1;
}