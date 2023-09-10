//C Program to Find LCM of two numbers using while loop

#include<stdio.h>
int main()
{

    int num1,num2,gcd,lcm,n1,n2,remainder;
    printf("Enter two positive integers: ");
    scanf("%d %d",&num1,&num2);

    n1=num1;
    n2=num2;

    while(n2!=0){

        remainder=n1%n2;
        n1=n2;
        n2=remainder;
    }

    gcd=n1;

    lcm=(num1*num2)/gcd;

    printf("LCM of input numbers %d and %d is %d",num1,num2,lcm);

    return 0;




}
