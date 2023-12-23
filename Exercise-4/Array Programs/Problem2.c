
//Display largest element of an array

#include<stdio.h>

int main()
{

    int num;
    float arr[100];

    printf("Enter total number of elements(1 to 100): ");
    scanf("%d",&num);

    printf("\n");

    for(int i=0; i<num; i++)
    {
        printf("Enter number %d: ",i+1);
        scanf("%f",&arr[i]);
    }

    for(int i=1; i<num; i++)
    {
        if(arr[0]<arr[i])
            arr[0]=arr[i];
    }

    printf("Largest element=%.2f\n",arr[0]);
2
    return 0;
}
