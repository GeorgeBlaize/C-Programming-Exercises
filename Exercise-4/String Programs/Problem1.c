
//Calculate length of a string

#include<stdio.h>
#include<conio.h>

void main()

{

    char ch[10];

    int count=0;
    printf("Enter the string: \n");
    gets(ch);
    for(int i=0; ch[i]!='\0'; i++)
    {
        count++;
    }

    printf("Length = %d",count);

    getch();

}
