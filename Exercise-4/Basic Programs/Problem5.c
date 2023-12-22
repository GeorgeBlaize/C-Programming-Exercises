
//Calculate area of right angle of triangle

#include<stdio.h>

int main()
{
    int base,height;
    float area;

    printf("Enter the base of right Angle Triangle: ");
    scanf("%d",&base);

    printf("Enter the height of right Angle Triangle: ");
    scanf("%d",&height);

    area=0.5*base*height;

    printf("Area of Right Angle Triangle: %f",area);

    return 0;
}
