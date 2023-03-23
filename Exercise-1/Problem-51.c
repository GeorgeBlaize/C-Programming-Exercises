
//C Program to Multiply two Matrices by Passing Matrix to a Function

#include<stdio.h>

void matrix_multiplication(int mat1[][10],int mat2[][10],int result[][10],int row1,int col1,int row2,int col2);

int main()
{
    int mat1[10][10],mat2[10][10],result[10][10],row1,row2,col1,col2;
    printf("Enter the number of rows and columns of matrix 1: ");
    scanf("%d %d",&row1,&col1);
    printf("Enter the elements of matrix 1:\n");
    for(int i=0; i<row1; i++)
    {
        for(int j=0; j<col1; j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }

    printf("Enter the number of rows and columns of matrix 2:");
    scanf("%d %d",&row2,&col2);
    if(col1!=row2){
        printf("The matrices cannot be multiplied.\n");
        return 0;
    }

    printf("Enter the elements of matrix 2:\n");
    for(int i=0; i<row2; i++)
    {
        for(int j=0; j<col2; j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }

    matrix_multiplication(mat1,mat2,result,row1,col1,row2,col2);
    printf("The product of the two matrices is :\n");
    for(int i=0; i<row1; i++)
    {
        for(int j=0; j<col2; j++)
        {
            printf("%d",result[i][j]);
        }

        printf("\n");
    }
    return 0;
}

void matrix_multiplication(int mat1[][10],int mat2[][10],int result[][10],int row1,int col1,int row2,int col2)
{

    for(int i=0; i<row1; i++)
    {
        for(int j=0; j<col2; j++)
        {
            result[i][j]=0;
            for(int k=0; k<col1; k++)
            {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    return 0;
}
