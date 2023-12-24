
//Ascending order using array

#include<stdio.h>

int main()
{
    int s,temp,a[20];
    printf("Enter total numbers of elements: ");
    scanf("%d",&s);

    printf("Enter %d elements: ",s);

    for(int i=0; i<s; i++)
     scanf("%d",&a[i]);

     for(int i=0; i<s-1; i++)
     {
         for(int j=0; j<s-1; j++){

            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
         }
     }

     printf("After sorting: ");
     for(int i=0; i<s; i++)
     {
         printf("%d ",a[i]);
     }

     return 0;


}
