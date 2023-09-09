//C Program to check Armstrong number

#include<stdio.h>

int main()
{

    int num,originalNum,sum=0,remainder;

    printf("Enter a number: ");
    scanf("%d",&num);

    originalNum=num;

    while(num>0){

        remainder=num%10;
        sum=sum+(remainder*remainder*remainder);
        num=num/10;
    }

    if(originalNum==sum){
        printf("%d is an Armstrong Number",originalNum);
    }
    else{
        printf("%d is not an Armstrong Number",originalNum);
    }

    return 0;
}
