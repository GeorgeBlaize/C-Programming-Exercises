
//Calculate area and Circumference of a circle

#include<stdio.h>
int main()
{

    int rad;
    float PI=3.14,area,circumference;
    printf("Enter radius of circle: ");
    scanf("%d",&rad);

    area=PI*rad*rad;
    printf("Area of circle: %f\n",area);

    circumference=2*PI*rad;
    printf("Circumference: %f",circumference);

    return 0;
}
