//Addition using pointers

#include<stdio.h>

int main()
{
    int first,second,*p,*q,sum;

    printf("Enter two integers to add\n");
    scanf("%d %d",&first,&second);

    p=&first; //storing address of first in p*

    q=&second;//storing address of second in q*

    sum=*p+*q;

    printf("Sum of entered numbers = %d\n",sum);

    return 0;
}
