
//C Program to Find Largest Element in an Array

#include<stdio.h>

int main()
{
    int n;
    double num[100];

    printf("Enter the number of elements(1 to 100): ");

    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
        printf("Enter number%d:",i+1);
        scanf("%lf",&num[i]);
    }

    for(int i=1; i<n; i++)
    {
        if(num[0]<num[i])
        {
            num[0]=num[i];
        }
    }
    printf("Largest element = %.2lf",num[0]);

    return 0;

}
