//Program to reverse a given number using Recursion

#include<stdio.h>
int rev=0,rem;
int reverse_function(int num){

  if(num){
    rem=num%10;
    rev=rev*10+rem;
    reverse_function(num/10);
  }
  else{
    return rev;

  }
}


int main(){

   int num,reverse_number;
   printf("Enter any number:");
   scanf("%d",&num);

   reverse_number=reverse_function(num);
   printf("The reverse of entered number is: %d",reverse_number);

   return 0;

}
