//C Program to Generate Multiplication Table

#include<stdio.h>
int main()
{

    int num;
    printf("Enter an integer: ");
    scanf("%d",&num);


    printf("Multiplication table of %d\n",num);

    for(int i=1; i<=10; i++){
        printf("%d * %d = %d\n",num,i,num*i);

    }

    return 0;
}
