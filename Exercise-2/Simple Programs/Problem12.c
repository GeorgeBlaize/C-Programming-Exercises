// check palindrome using recursion

#include<stdio.h>

int check_palindrome(int num){

  static int reverseNumber=0,remainder;

    if(num!=0){
        remainder=num%10;
        reverseNumber=reverseNumber*10+remainder;
        check_palindrome(num/10);
    }

    return reverseNumber;




}
int main()
{
    int num,reverseNumber;

    printf("Enter a number: ");

    scanf("%d",&num);

    reverseNumber=check_palindrome(num);

    if(num==reverseNumber){
        printf("%d is a palindrome number",num);
    }
    else{
        printf("%d is not a palindrome number",num);
    }

    return 0;
}
