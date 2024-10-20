/*
This program takes a sorted array and a target element and tries to find 
the index of that element in the array.
*/

#include <stdio.h>

int findIndex(int arr[], int arr_len, int target)
{
    int start = 0;
    int end = arr_len - 1;
    int middle = 0;
    while (start <= end)
    {
        middle = (start + end) / 2;
        if (arr[middle] == target)
        {
            return middle;
        }
        
        if (arr[middle] > target)
        {
            end = middle - 1;
        }
        else
        {
            start = middle + 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {2,3,4,10,40};
    int target = 0;
    int arr_len = sizeof(arr) / sizeof(arr[0]);
    int index = findIndex(arr, arr_len,target);
    (index > 0) ? printf("%d is present at index %d\n", target, index) : printf("%d is not in the array\n", target);
    return 0;
}