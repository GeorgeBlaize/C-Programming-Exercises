
//Reverse a string

#include<stdio.h>
#include<conio.h>

void main()
{

    int count=0;

    char ch[20];

    printf("Enter the string: \n");
    gets(ch);
    for(int i=0; ch[i]!='\0'; i++)
    {
        count++;
    }

    printf("Reverse is: ");
    for(int i=count-1; i>=0; i--)
    {
        printf("%c",ch[i]);
    }

    getch();
}
