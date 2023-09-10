//C Program to find LCM from GCD of two numbers using for loop

#include<stdio.h>
int main()
{

    int num1,num2,gcd,lcm,remainder;

    printf("Enter two positive integers:");
    scanf("%d %d",&num1,&num2);

    for(int i=1; i<=num1 && i<=num2; i++){

        if(num1%i==0 && num2%i==0){
            gcd=i;
        }

    }


    lcm=(num1*num2)/gcd;

    printf("LCM of two input number %d and %d is: %d",num1,num2,lcm);

    return 0;
}
