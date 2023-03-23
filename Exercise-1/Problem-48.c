
//C Program to Add Two Matrices Using Multi-dimensional Arrays

#include<stdio.h>

int main()
{

    int rows,cols,a[100][100],b[100][100],sum[100][100],i,j,c;

    printf("Enter the number of rows(between 1 and 100): ");
    scanf("%d",&rows);
     printf("Enter the number of columns(between 1 and 100): ");
    scanf("%d",&cols);

    printf("Enter elements of 1st matrix: \n");
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            printf("Enter element a%d%d:",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }

     printf("Enter elements of 2nd matrix: \n");
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            printf("Enter element a%d%d:",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }

    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }
    }

    printf("\nSum of two matrices: \n");
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            printf("%d ",sum[i][j]);
            if(j==c-1){
                printf("\n\n");
            }
        }
    }

    return 0;
}
