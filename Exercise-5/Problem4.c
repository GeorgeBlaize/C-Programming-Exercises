
//Factorial Program

#include<stdio.h>
#include<conio.h>

void main()
{
    int i,fact=1,number;

    printf("Enter a number: ");
    scanf("%d",&number);

    for(int i=1; i<=number; i++)
    {
        fact*=i;
    }

    printf("Factorial of %d is: %d",number,fact);
    getch();


}
