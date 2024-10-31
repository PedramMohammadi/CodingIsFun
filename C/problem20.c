/*
This program takes a matrix as input and then transposes it and prints the transposed matrix.
*/

#include <stdio.h>

int main()
{
    int rows = 0;
    int cols = 0;
    printf("Please enter the number of rows and number of columns: ");
    scanf("%d %d", &rows, &cols);
    int input_matrix[rows][cols];
    int output_matrix[rows][cols];
    int count = 0;
    for (int i = 0; i < rows; i++) //Populate the matrix
    {
        for (int j = 0; j < cols; j++)
        {
            input_matrix[i][j] = count + 1;
            count ++;
        }
    }

    printf("Your matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d\t", input_matrix[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < rows; i++) //Transpose the matrix
    {
        for (int j = 0; j < cols; j++)
        {
            output_matrix[i][j] = input_matrix[i][j];
        }
    }

    printf("Transposed matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d\t", output_matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}