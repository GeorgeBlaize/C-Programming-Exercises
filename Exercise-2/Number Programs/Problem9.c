//C Program to calculate power of a number using pow() function

#include<stdio.h>
#include<math.h>

int main()
{

    int number,exp,result;
    printf("Enter the number: ");
    scanf("%d",&number);
    printf("Enter exponent: ");
    scanf("%d",&exp);

    result=pow(number,exp);

    printf("%d to the power %d is : %d",number,exp,result);

    return 0;
}
