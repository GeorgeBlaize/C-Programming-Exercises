
//Calculate average using array

#include<stdio.h>

int main()
{

    int n;
    float num[100],sum=0.0,average;
    printf("Enter the numbers of data: ");
    scanf("%d",&n);

    while(n>100 || n<=0)

    {
        printf("Error! number should in range of(1 to 100).\n");
        printf("Enter the number again: ");

        scanf("%d",&n);
    }

    for(int i=0; i<n; i++)
    {
        printf("%d enter number: ",i+1);
        scanf("%f",&num[i]);
        sum+=num[i];
    }

    average=sum/n;
    printf("Average = %.2f\n",average);

    return 0;
}
