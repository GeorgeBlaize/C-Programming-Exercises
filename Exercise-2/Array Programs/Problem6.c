//C Program to Find the Number of Elements in an Array

#include<stdio.h>

int main()
{


    double arr[]={11,22,33,44,55,66};

    int n;

    n=sizeof(arr)/sizeof(arr[0]);
    printf("Size of the array is : %d\n",n);
    return 0;
}
