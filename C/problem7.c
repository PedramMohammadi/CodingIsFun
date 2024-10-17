/*
This program asks for 3 numbers from the user and then determines which one is the largest.
*/

#include <stdio.h>

int main()
{
    int num1 = 0, num2 = 0, num3 = 0, count = 0, max_num = -1;
    while (count != 3)
    {
        printf("Enter your number: ");
        scanf("%d", &num1);
        if (num1 > max_num)
        {
            max_num = num1;
        }
        count ++;
    }
    printf("max number is %d\n", max_num);
    return 1;
}