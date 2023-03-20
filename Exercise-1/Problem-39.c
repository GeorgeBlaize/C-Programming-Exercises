
//C Program to Find G.C.D Using Recursion

#include<stdio.h>

int gcd(int a,int b)
{
    if(b==0){
        return a;
    }
    else
    {
        return gcd(b,a%b);
    }
}

int main()
{
    int a,b;

    printf("Enter two positive integers: ");

    scanf("%d %d",&a,&b);

    printf("G.C.D of %d and %d is %d",a,b,gcd(a,b));

    return 0;



}

