
//C Program to Check Whether a Number is Prime or Not

#include<stdio.h>

int main()
{
    int num,count=0;

    printf("Enter a positive integer: ");

    scanf("%d",&num);

    for(int i=2; i<num; i++)
    {
        if(num%i==0)
        {
            count++;

            break;
        }
    }

   if(count==0)
   {
       printf("%d is a prime number.",num);
   }
   else
   {
       printf("%d is not a prime number.",num);
   }

   return 0;

}
