
//C Program to Check Whether a Number can be Expressed as Sum of Two Prime Numbers

#include<stdio.h>

int isPrime(int num){
   if(num<=1){
    return 0;
   }
   for(int i=2; i<=num/2; i++){
    if(num%i==0){
        return 0;
    }
   }
   return 1;

}


int main()
{
    int num,flag=0;

    printf("Enter a positive integer: ");
    scanf("%d ",&num);

    for(int i=2; i<=num/2; i++){

        if(isPrime(i)&&isPrime(num-i)){
            printf("%d can be expressed as the sum of %d and %d.\n",num,i,num-i);
            flag=1;
            break;
        }
    }

    if(flag==0){
            printf("%d cannot be expressed as the sum of of two prime numbers.\n",num);
    }

    return 0;

}
