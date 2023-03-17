
//C Program to Check Whether a Number is Positive or Negative

#include<stdio.h>

int main()
{

    int num;

    printf("Enter a number: ");

    scanf("%d",&num);

    if(num>0)
    {
        printf("You entered a positive number.");
    }
    else if(num<0)
    {
        printf("You entered a negative number.");
    }
    else if(num==0)
    {
        printf("You entered 0");
    }

    return 0;
}
