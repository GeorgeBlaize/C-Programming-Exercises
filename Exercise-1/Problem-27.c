
//C Program to Check Whether a Number is Palindrome or Not

#include<stdio.h>

int main()
{
    int num,remainder,reverse=0,temp;

    printf("Enter an integer: ");

    scanf("%d",&num);

    temp =num;

    while(num!=0)
    {

        remainder = num%10;

        reverse = reverse*10+remainder;

        num = num/10;
    }

    if(temp==reverse)
    {
        printf("%d is a palindrome.",temp);
    }
    else
    {
        printf("%d is not a palindrome.",temp);
    }

    return 0;
}
