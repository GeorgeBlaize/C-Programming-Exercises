
//C Program to Find Transpose of a Matrix

#include<stdio.h>

int main()
{

    int rows,cols,a[10][10],transpose[10][10];

    printf("Enter rows and columns: ");

    scanf("%d %d \n",&rows,&cols);

    printf("Enter elements of the matrix: \n");

    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            transpose[j][i]=a[i][j];
        }
    }

    printf("Transpose of the matrix: \n");

    for(int i=0; i<cols; i++)
    {
        for(int j=0; j<rows; j++)
        {
            printf("%d\t",transpose[i][j]);

        }
        printf("\n");
    }

    return 0;
}
