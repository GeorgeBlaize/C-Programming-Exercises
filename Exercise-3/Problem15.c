//Binary to octal

#include<stdio.h>


int binaryToDecimal(long long binary){

     int decimal=0;
     int base=1;

     while(binary>0){

        int lastDigit=binary%10;
        binary=binary/10;
        decimal+=lastDigit*base;
        base*=2;
     }

     return decimal;

}


int decimalToOctal(int decimal){
    int octal=0,i=1;

    while(decimal!=0){


        octal+=(decimal%8)*i;
        decimal/=8;
        i*=10;
    }
    return octal;

}


int main()
{

    long long binary;
    printf("Enter a binary number: ");
    scanf("%lld",&binary);

    int decimal=binaryToDecimal(binary);
    int octal=decimalToOctal(decimal);

    printf("Octal equivalent: %d\n",octal);

    return 0;
}
