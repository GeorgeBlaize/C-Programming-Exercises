//C Program to display Fibonacci series using recursion

#include<stdio.h>

int fibonacci_series(int num);

int main()
{

    int count,c=0,i;
    printf("Enter number of terms: ");
    scanf("%d",&count);

    printf("\nFibonacci series:\n");
    for(int i=1; i<=count; i++){
        printf("%d\n",fibonacci_series(c));
        c++;
    }
    return 0;
}


int fibonacci_series(int num){

     if (num==0){
        return 0;
     }
     else if(num==1){
        return 1;
     }
     else{
        return(fibonacci_series(num-1)+fibonacci_series(num-2));
     }

}
