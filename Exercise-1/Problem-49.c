
//C Program to Multiply Two Matrices Using Multi-dimensional Arrays

#include<stdio.h>

int main()
{

    int a[10][10],b[10][10],mul[10][10],rows,cols;

    printf("Enter the number of row: ");
    scanf("%d",&rows);
    printf("Enter the number of columns: ");
    scanf("%d",&cols);

    printf("Enter the first matrix elements:\n");
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

     printf("Enter the second matrix elements:\n");
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    printf("Multiply of the matrix\n");
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            mul[i][j]=0;
            for(int k=0; k<cols; k++)
            {
                mul[i][j] += a[i][j]*b[k][j];
            }
        }
    }

    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            printf("%d\t",mul[i][j]);

        }
        printf("\n");
    }

    return 0;
}
