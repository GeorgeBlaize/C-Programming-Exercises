
//Check palindrome number

#include<stdio.h>

int main()
{

    int num,rev=0,temp;

    printf("Enter a number to check weather it is palindrome or not: ");

    scanf("%d",&num);

    temp=num;

    while(temp!=0)

    {
        rev=rev*10;
        rev=rev+temp%10;
        temp=temp/10;
    }

    if(num==rev)
    {
        printf("your entered  %d number is palindrome.",num);
    }
    else
    {
        printf("Your entered %d number is not a palindrome.",num);
    }

    return 0;
}
