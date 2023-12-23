
//Sum of diagonal elements of Matrix

#include<stdio.h>

int main()
{

    int a[10][10];
    int m,n,sum=0;

    printf("Enter the number of rows and columns: \n");
    scanf("%d %d",&m,&n);
    printf("Enter the elements:\n");

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("The entered matrix is :\n");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++){

            printf("%d\t",a[i][j]);

        }
        printf("\n");
    }


    if(m==n)
    {

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==j)
                sum=sum+a[i][j];
        }
    }

    printf("Sum of diagonal elements is: %d",sum);
    }

    else{
        printf("Matrix is not square.Diagonal sum undefined.");
    }


    return 0;
}
