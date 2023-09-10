//C Program to Check Whether a Number is Prime or Not

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
    int num;
    printf("Enter a number to check whether prime or not: ");
    scanf("%d",&num);

    if(isPrime(num)){
        printf("Entered number %d is a prime number.",num);
    }
    else
    {
        printf("Entered number %d is not a prime number.",num);
    }

    return 0;
}
