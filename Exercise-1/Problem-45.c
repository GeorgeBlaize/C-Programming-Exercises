
//C Program to Calculate Average Using Arrays

#include<stdio.h>

int main()
{

    int n;
    float num[5],sum=0.0,avg;

    printf("Enter the numbers of elements: ");

    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {

        printf("%d. Enter number: ",i+1);
        scanf("%f",&num[i]);
        sum += num[i];
    }

    avg = sum/n;

    printf("Average = %.2f",avg);

    return 0;
}
