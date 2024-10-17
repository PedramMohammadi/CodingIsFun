/*
This problem takes as input an array of integers and the number of shifts and then
shifts the array circularly by the shift.
*/

#include <stdio.h>

int main()
{
    int arr[] = {1,2,3,4,5};
    int shift = 2;
    int arr_len = sizeof(arr) / sizeof(arr[0]);
    if (shift > arr_len)
    {
        shift %= arr_len;
    }
    int temp[arr_len], new_index = 0;
    for (int i = 0; i < arr_len; i++) //Populating the reversed array
    {
        new_index = (i - shift + arr_len) % arr_len;
        temp[new_index] = arr[i];
    }
    printf("After rotation: ");
    for (int i = 0; i < arr_len; i++)
    {
        printf("%d\t", temp[i]);
    } 
}