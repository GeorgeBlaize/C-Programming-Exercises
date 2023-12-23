
//Add two Matrix using loop

#include<stdio.h>

int main()
{

    int m,n;
    int a[10][10],b[10][10],sum[10][10];

    printf("Enter the no of rows and columns: ");
    scanf("%d %d",&m,&n);
    printf("Enter the elements of first matrix: \n");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++){
            scanf("%d",&a[i][j]);
      }
    }

    printf("Enter the elements of second matrix: \n");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++){
            scanf("%d",&b[i][j]);
        }
    }


    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
           sum[i][j]=a[i][j]+b[i][j];
        }

    }

    printf("Sum of entered matrices: \n");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
          printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }

    return 0;


}
