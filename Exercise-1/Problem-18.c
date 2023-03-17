
//C Program to Find Factorial of a Number

#include<stdio.h>

int main()
{
    int num,fact=1;

    printf("Enter an integer: ");

    scanf("%d",&num);

    for(int i=1; i<=num; i++)
    {
        fact*=i;
    }

    printf("Factorial of %d = %d",num,fact);

    return 0;


}
