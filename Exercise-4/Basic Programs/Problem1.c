//Convert Temperature from degree to fahrenheit

#include<stdio.h>

int main()
{
    float celsius,fahrenheit;

    printf("Enter temperaure in Celsius: ");
    scanf("%f",&celsius);

    fahrenheit=(1.8*celsius)+32;

    printf("Temperature in Fahrenheit: %f",fahrenheit);

    return 0;
}
