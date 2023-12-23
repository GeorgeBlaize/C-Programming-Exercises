//Multiply two matrix

#include<stdio.h>

int main()
{
    int m, n, p;
    int firstMatrix[10][10], secondMatrix[10][10], multiplicationMatrix[10][10];

    // Get the dimensions of the matrices
    printf("Enter the number of rows and columns of the first matrix: ");
    scanf("%d %d", &m, &n);

    printf("Enter the number of columns of the second matrix: ");
    scanf("%d", &p);

    // Input for the first matrix
    printf("Enter the elements of the first matrix:\n");
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &firstMatrix[i][j]);
        }
    }

    // Input for the second matrix
    printf("Enter the elements of the second matrix:\n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < p; j++)
        {
            scanf("%d", &secondMatrix[i][j]);
        }
    }

    // Initialize multiplicationMatrix elements to 0
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < p; j++)
        {
            multiplicationMatrix[i][j] = 0;
        }
    }

    // Matrix multiplication
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < p; j++)
        {
            for(int k = 0; k < n; k++)
            {
                multiplicationMatrix[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }

    // Displaying the result
    printf("Result of matrix multiplication:\n");
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < p; j++)
        {
            printf("%d\t", multiplicationMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

