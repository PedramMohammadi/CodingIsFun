/*
This program asks the user for an integer and then calculates the sum of natural numbers until that number. 
*/

#include <stdio.h>

int getSum(int n)
{
    int result = 0, temp = n;
    if (n == 0)
    {
        result = 0;
    }
    else
    {
        result += temp + getSum(temp - 1);
    }
    return result;
}

int main()
{
    int n = 0, result = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    result = getSum(n); 
    printf("%d\n", result);
    return 1;
}