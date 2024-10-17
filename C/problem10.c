/*
This program converts a binary number to its equivalent decimal value.
*/

#include <stdio.h>

int main()
{
    int binary_num = 0, temp = 0, result = 0, last_digit = 0, base = 1;
    printf("Please enter a binary number: ");
    scanf("%d", &binary_num);
    temp = binary_num;
    while (temp != 0)
    {
        last_digit = temp % 10;
        result += last_digit * base;
        base *= 2;
        temp /= 10;
    }
    printf("Binary equivalent of %d is %d\n", binary_num, result);
    return 1;
}