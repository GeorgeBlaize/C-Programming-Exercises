//C Program to find factorial of number using Recursion

#include<stdio.h>

int find_factorial(int n);

int main()
{

    int num,fact;
    printf("Enter any integer number: ");
    scanf("%d",&num);

    fact=find_factorial(num);

    printf("factorial of %d is : %d",num,fact);
    return 0;
}

int find_factorial(int n){

   if(n==0){
    return 1;
   }

   else{
    return n*find_factorial(n-1);
   }

}


