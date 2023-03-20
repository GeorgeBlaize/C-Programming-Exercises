
//C Program to Check Prime or Armstrong Number Using User-defined Function

#include<stdio.h>
#include<math.h>

int isPrime(int num){
   if(num<=1){
    return 0;
   }
   for(int i=2; i<=sqrt(num); i++){
    if(num%i==0){
        return 0;
    }
   }
   return 1;

}

int isArmstrong(int num){
   int sum = 0,originalNum=num,rem,digits=0;

   while(originalNum!=0){
    digits++;
    originalNum/=10;
   }

   originalNum=num;
   while(originalNum!=0){
    rem=originalNum%10;
    sum += pow(rem,digits);
    originalNum /= 10;

   }
   if(num==sum)
   {
       return 1;
   }
   else
   {
       return 0;
   }
}

int main()
{
    int num;

    printf("Enter a positive number: ");

    scanf("%d",&num);

    if(isPrime(num)){

        printf("%d is a prime number.\n",num);
    }
    else
    {
        printf("%d is not a prime number.\n",num);
    }
    if(isArmstrong(num)){
        printf("%d is an Armstrong number.\n",num);
    }
    else
    {
        printf("%d is not an Armstrong number.\n",num);
    }

    return 0;


}
