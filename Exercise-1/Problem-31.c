
//C Program to Display Armstrong Number Between Two Intervals

#include<stdio.h>
int main()
{

    int num1,num2,i,temp,n,remainder;

    printf("Enter two numbers(intervals): ");
    scanf("%d %d",&num1,&num2);

    printf("Armsstrong numbers between %d and %d are: ",num1,num2);

    for(i=num1+1; i<num2; i++)
    {
        temp=i;
        n=0;
        while(temp!=0)
        {
            remainder=(temp%10);
            n+=remainder*remainder*remainder;
            temp/=10;
        }
        if(i==n)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
