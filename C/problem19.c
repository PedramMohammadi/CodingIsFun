/*
This program defines an array with a dynamic size.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr; //An array is an address in C
    int size;
    printf("Please enter size of elements: ");
    scanf("%d", &size);
    ptr = (int *)malloc(size * sizeof(int)); //Dynamically allocate the memory
    if (ptr == NULL)
    {
        printf("Memory not allocated\n");
    }
    else
    {
        for (int i = 0; i < size; i++)
        {
            ptr[i] = i + 1;
        }
    }
    printf("Elements of the array are: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", ptr[i]);
    }
    free(ptr); //free the memory
}