//C Program to calculate Area of an Equilateral triangle

#include<stdio.h>
#include<math.h>

int main()
{

    float side,area,temp;

    printf("Enter the side of the triangle: ");
    scanf("%f",&side);

    temp=sqrt(3)/4;
    area=temp*side*side;
    printf("Area of Equilateral Triangle is: %f",area);

    return 0;
}
