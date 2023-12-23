
//Check entered number armstrong number or not

#include<stdio.h>

int main()
{


    int num,r,sum=0,temp;
    printf("Enter a number to check weather it is armstrong number or not: \n");
    scanf("%d",&num);

    temp=num;
    while(num!=0){
        r=num%10;
        num/=10;
        sum=sum+(r*r*r);
    }

    if(sum==temp)
        printf("Your entered number %d is an armstrong number.\n",temp);
    else
        printf("Your entered number %d is not an armstrong number",temp);

    return 0;
}
