
//C Program to Check Whether a Number is Even or Odd

#include<stdio.h>

int main()

{
    int num;

    printf("Enter an integer: ");

    scanf("%d",&num);

    if(num%2==0)
    {
        printf("%d is even.",num);
    }
    else
        printf("%d is odd.",num);

    return 0;
}
