//C Program to Find GCD of two Numbers

#include<stdio.h>
int main()
{
    int num1,num2,gcd,n1,n2,remainder;

    printf("Enter two integers: ");
    scanf("%d %d",&num1,&num2);

    n1=num1;
    n2=num2;

    while(n2!=0){

        remainder=n1%n2;
        n1=n2;
        n2=remainder;
    }

    gcd=n1;

    printf("GCD of input numbers %d and %d is: %d",num1,num2,gcd);

    return 0;
}
