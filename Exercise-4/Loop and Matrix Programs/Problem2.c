
//Subtract two matrix using loop

#include<stdio.h>

int main()
{


    int m,n;

    int a[10][10],b[10][10],sub[10][10];

    printf("Enter the number of rows and columns: \n");
    scanf("%d %d",&m,&n);

    printf("Enter the elements of the first matrix: \n");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }


     printf("Enter the elements of the second matrix: \n");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }


    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            sub[i][j]=a[i][j]-b[i][j];
        }
    }


    printf("Subtraction of entered matrices: \n");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
           printf("%d\t",sub[i][j]);
        }
        printf("\n");
    }



}
