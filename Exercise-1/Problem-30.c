
//C Program to Check Armstrong Number
#include<stdio.h>

int main()
{
    int num,remainder,sum=0,temp;

    printf("Enter an integer: ");

    scanf("%d",&num);

    temp=num;

    while(temp!=0)
    {
        remainder=temp%10;

        sum = sum+remainder*remainder*remainder;

        temp = temp/10;
    }

    if(sum==num)
    {
        printf("%d is an Armstrong number.",sum);
    }
    else
    {
        printf("Not an Armstrong number.");
    }

    return 0;
}
