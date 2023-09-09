//C Program to check whether the given integer is positive or negative

#include<stdio.h>
int main()

{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    if(num>0){
        printf("%d is a positive number",num);
    }
    else if(num<0){
        printf("%d is a negative number",num);
    }
    else
    {
        printf("%d is neither positive nor negative",num);
    }

    return 0;

}
