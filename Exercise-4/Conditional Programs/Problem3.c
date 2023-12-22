
//Check entered number is odd or even

#include<stdio.h>

int main()
{

    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    if(num%2==0)
    {
        printf("%d is even number",num);
    }
    else
        printf("%d is odd",num);


    return 0;


}
