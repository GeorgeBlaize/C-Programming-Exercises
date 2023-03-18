
//C Program to Calculate the Power of a Number

#include<stdio.h>

int main()
{
    int base,exponent,answer;

    printf("Enter a base number: ");

    scanf("%d",&base);

    printf("Enter an exponent: ");

    scanf("%d",&exponent);

    answer = pow(base,exponent);

    printf("Answer = %d",answer);

    return 0;
}
