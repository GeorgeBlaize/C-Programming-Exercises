//C Program to Count Number of Digits in an Integer

#include<stdio.h>
int main()
{
    long number,temp;
    int count=0;
    printf("Enter an integer: ");
    scanf("%ld",&number);

    temp=number;

    do{
        temp/=10;
        count++;

    }while(temp!=0);

    printf("Number of digits in the number %ld is : %d",number,count);

    return 0;
}
