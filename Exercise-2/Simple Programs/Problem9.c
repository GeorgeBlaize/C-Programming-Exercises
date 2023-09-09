//C Program to find prime numbers in a given range

#include<stdio.h>

int main()
{

    int num1,num2,flag_var;

    printf("Enter two range(input integer numbers only):");

    scanf("%d %d",&num1,&num2);

    printf("Prime numbers from %d and %d are: \n",num1,num2);
    for(int i=num1+1; i<num2; i++){
        flag_var=0;
        for(int j=2; j<=i/2; j++){
            if(i%j==0){

                flag_var=1;
                break;
            }

        }
        if(flag_var==0){
            printf("%d\n",i);
        }
    }
    return 0;
}
