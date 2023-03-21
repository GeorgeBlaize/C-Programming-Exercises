
//C Program to Convert Octal Number to Decimal and vice-versa

#include<stdio.h>

int main()
{
    int octnum,decnum=0,i=0,rem;
    printf("Enter any  Octal Number: ");
    scanf("%d",&octnum);
    while(octnum!=0)
    {
        rem=octnum%10;
        decnum=decnum+(rem*pow(8,i));
        i++;
        octnum=octnum/10;
    }

    printf("Decimal number = %d",decnum);

    return 0;
}
