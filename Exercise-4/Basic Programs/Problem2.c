
//Calculate the simple interest

#include<stdio.h>

int main()
{

    int amount,rate,time,si;
    printf("Enter Principle Amount: ");
    scanf("%d",&amount);

    printf("Enter Rate of Interest:");
    scanf("%d",&rate);

    printf("Enter Period of Time:");
    scanf("%d",&time);

    si=(amount*rate*time)/100;
    printf("Simple Interest: %d",si);

    return 0;
}
