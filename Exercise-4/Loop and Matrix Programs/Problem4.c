
//Transpose of a matrix

#include<stdio.h>

int main()
{
    int m,n;
    int a[100][100],b[100][100];


    printf("Enter the no rows and columns: \n");
    scanf("%d %d",&m,&n);

    printf("Enter the elements: \n");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            b[j][i]=a[i][j];
        }
    }

    printf("Transpose of matrix is:\n");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            printf("%d\t",b[i][j]);
        }

        printf("\n");
    }

    return 0;

}
