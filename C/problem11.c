/*
This program gets as input an integer number and then calculates its Fibonacci sequence.
We assume the user always inputs a positive integer.
*/

#include <stdio.h>

int getFibo(int n)
{
    int f = 0;
    if (n == 0)
    {
        f = 0;
    }
    else if (n == 1)
    {
        f = 1;
    }
    else
    {
        f += getFibo(n - 1) + getFibo(n - 2);   
    }
    return f;
}

int main()
{
    int n = 0, result = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        result = getFibo(i);
        printf("%d\t", result);
    }
    return 1;
}