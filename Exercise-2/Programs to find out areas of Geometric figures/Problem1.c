//C Program to calculate Area and Circumference of Circle

#include<stdio.h>

int main()
{

    float Pi=3.14,area,circumference,radius;

    printf("Enter raduis of circle: ");

    scanf("%f",&radius);

    area=Pi*radius*radius;

    printf("Area of circle is : %f\n",area);

    circumference=2*Pi*radius;
    printf("Circumference of circle is : %d",circumference);

    return 0;
}
