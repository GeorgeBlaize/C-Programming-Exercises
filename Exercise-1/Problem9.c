
//C Program to Swap Two Numbers

#include<stdio.h>

int main()

{
     float num1,num2,temp;

    printf("Enter first number: ");

    scanf("%f",&num1);

    printf("Enter second number: ");

    scanf("%f",&num2);

    temp=num1;

    num1=num2;

    num2=temp;

    printf("\nAfter swapping,first number = %.2f\n",num1);

    printf("After swapping,second number = %0.2f\n",num2);

    return 0;



}
