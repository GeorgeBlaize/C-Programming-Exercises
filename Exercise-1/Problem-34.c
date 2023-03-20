
//C Program to Display Prime Numbers Between Intervals Using Function

#include<stdio.h>



int isPrime(int num)
{
    if(num<=1)
    {
        return 0;
    }
    for(int i=2; i<=num/2; i++)
    {
        if(num%i==0)
        {
            return 0;
        }
    }
    return 1;
}


int main()
{

    int start,end;

    printf("Enter the start and end of the interval: ");

    scanf("%d %d",&start,&end);

    printf("Prime numbers between %d %d are: ",start,end);

    for(int i=start; i<=end; i++)
    {
        if(isPrime(i))
        {
            printf("%d ",i);
        }
    }
    return 0;
}


