
//Find larger value between two variables

#include<stdio.h>

int main()
{

    int a,b;

    printf("Enter value of a: ");
    scanf("%d",&a);
    printf("Enter value of b: ");
    scanf("%d",&b);

    if(a>b)
    {
        printf("a is larger than b");
    }
    else if(b>a)
    {
        printf("b is larger than a");
    }
    else
        printf("a and b are equal");

    return 0;
}
