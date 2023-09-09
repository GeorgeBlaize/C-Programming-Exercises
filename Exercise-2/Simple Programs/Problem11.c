//C Program to check if a number is palindrome or not

#include<stdio.h>
int main()
{

    int num,reverse=0,remainder,originalNumber;

    printf("Enter an integer: ");
    scanf("%d",&num);

    originalNumber=num;

    while(num>0){

        remainder=num%10;
        reverse=reverse*10+remainder;
        num=num/10;
    }

    if(originalNumber==reverse){
        printf("%d is a palindrome number",originalNumber);
    }
    else{
        printf("%d is not a palindrome number",originalNumber);
    }

    return 0;
}
