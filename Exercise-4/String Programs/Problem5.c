
//Change string from uppercase to lowercase

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{

    char ch[20];
    printf("Enter the string in uppercase:\n");
    gets(ch);
    printf("String in Lowercase is:");
    printf("%s",strlwr(ch));
    getch();

}
