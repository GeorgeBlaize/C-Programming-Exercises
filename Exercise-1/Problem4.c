
//C Program to Multiply Two Floating-Point Numbers

#include<stdio.h>

int main()
{
    float num1,num2,multiply;

    printf("Enter two numbers: ");

    scanf("%f %f",&num1,&num2);

    multiply = num1 * num2;

    printf("Product = %.2f",multiply);

    return 0;
}
