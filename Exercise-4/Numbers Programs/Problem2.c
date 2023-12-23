//Check perfect number

#include<stdio.h>

int main()
{

    int a,b,sum=0;

    printf("Enter a number: \n");
    scanf("%d",&a);

    for(b=1; b<a; b++)
    {
        if(a%b==0)
        {
            sum=sum+b;

        }
    }

    if(sum==a)
    {

        printf("Your entered %d number is perfect number.",a);
    }
    else

      printf("Your entered %d number is not a perfect number.",b);


    return 0;

}
