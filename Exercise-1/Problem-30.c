
//C Program to Check Armstrong Number
#include<stdio.h>

int main()
{
    int num,remainder,sum=0,temp;

    printf("Enter an integer: ");

    scanf("%d",&num);

    temp=num;

    while(num)
    {
        remainder=num%10;

        sum = sum+remainder*remainder*remainder;

        num = num/10;
    }

    if(temp==sum)
    {
        printf("%d is an Armstrong number.",temp);
    }
    else
    {
        printf("%d is not an Armstrong number.",temp);
    }

    return 0;
}
