
//Calculate Area of rectangle

#include<stdio.h>
#include<conio.h>

int main()
{

    int length,breadth,area;

    printf("Enter the length of Rectangle: ");
    scanf("%d",&length);

    printf("Enter the breadth of Rectangle: ");
    scanf("%d",&breadth);

    area=length*breadth;

    printf("Area of rectangle: %d",area);

    return 0;
}
