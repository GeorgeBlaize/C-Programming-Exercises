//Program to reverse a number using While loop


#include<stdio.h>
int main()
{

    int remainder,reverse=0,num;

    printf("Enter an integer number: ");
    scanf("%d",&num);

    while(num>0){

        remainder=num%10;
        reverse=reverse*10+remainder;
        num=num/10;
    }

    printf("Reverse of the entered number is: %d ",reverse);

    return 0;
}
