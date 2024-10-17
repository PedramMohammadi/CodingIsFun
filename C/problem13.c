/*
This program finds the minimum and maximum of an input array.
We assume all the members of the array are positive integers.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    int arr[] = {4,7,2,1,9,10,0};
    int arr_len = sizeof(arr) / sizeof(arr[0]);
    int max_ = -1, min_ = __INT_MAX__;
    for (int i = 0; i < arr_len; i++)
    {
        if (arr[i] > max_)
        {
            max_ = arr[i];
        }
        if (arr[i] < min_)
        {
            min_ = arr[i];
        }
    }
    printf("Minimum is %d and maximum is %d\n", min_, max_);
    return 1;
}