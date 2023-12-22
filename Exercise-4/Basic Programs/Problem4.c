
//Find area of Scalene triangle

#include<stdio.h>
#include<math.h>

int main()
{

    int s1,s2,angle;
    float area;

    printf("Enter side 1: ");
    scanf("%d",&s1);

    printf("Enter side 2: ");
    scanf("%d",&s2);

    printf("Enter included angle: ");
    scanf("%d",&angle);

    area=(s1*s2*sin((M_PI/180)*angle))/2;

    printf("Area of scalene Triangle: %f",area);

    return 0;
}
