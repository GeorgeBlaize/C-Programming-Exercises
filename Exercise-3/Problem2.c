//Area of triangle

#include<stdio.h>

int main()
{

    float height,base;
    float ans;

    printf("Enter height and base:\n");
    scanf("%f %f",&height,&base);
    ans=(height*base)/2;

    printf("Area of triangle is: %f",ans);

    return 0;
}
