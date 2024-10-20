/*
This program removes duplicates from a sorted array.
*/

#include <stdio.h>

int removeDuplicates(int arr[], int arr_len)
{
    if (arr_len == 0)
    {
        return 0;
    }

    int curr_idx = 0; //index of the unique elements

    for (int i = 1; i < arr_len; i++)
    {
        if (arr[curr_idx] != arr[i])
        {
            curr_idx += 1;
            arr[curr_idx] = arr[i];
        }
    }
    return curr_idx + 1;
}

int main()
{
    int arr[] = {1,2,2,3,4,4,4,5,5};
    int arr_len = sizeof(arr) / sizeof(arr[0]);
    int updated_len = removeDuplicates(arr, arr_len);
    printf("array after removal of duplicates: ");
    for (int i = 0; i < updated_len; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}