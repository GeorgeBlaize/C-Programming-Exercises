
//C Program to Convert Binary Number to Decimal and vice-versa

#include<stdio.h>

int main()
{
    int num,binary_num,decimal_num=0,base=1,rem;

    printf("Enter a binary number: ");

    scanf("%d",&num);

    binary_num=num;

    while(num>0)
    {
        rem=num%10;

        decimal_num=decimal_num +rem*base;

        num = num/10;

        base = base *2;
    }

    printf("The binary number is %d\t",binary_num);

    printf("\nThe decimal number is %d\t",decimal_num);

    return 0;
}
