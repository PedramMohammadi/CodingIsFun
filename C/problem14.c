/*
This program takes an array and its length and reverses the array and returns the 
reversed array.
*/

#include <stdio.h>

int main()
{
    int arr[] = {1,2,3,4,5,6};
    int arr_len = 6;
    int start = 0, end = arr_len - 1, temp = 0;
    while (start <= end) //Two pointer approach to do the reversal
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start ++;
        end --;
    }
    printf("The reversed array is: ");
    for (int i  = 0; i < arr_len; i++) //Displaying the reversed array
    {
        printf("%d\t", arr[i]);
    }
    return 1;

}