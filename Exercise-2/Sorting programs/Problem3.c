//Selection Sort Program in C

#include<stdio.h>

void selectionSort(int arr[],int n){

    int i,j,minIndex,temp;

    for(i =0; i<n-1; i++){

        minIndex=i;
        for(j=i+1; j<n; j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }

        temp=arr[i];
        arr[i]=arr[minIndex];
        arr[minIndex]=temp;

    }


}

int main()
{

    int arr[]={64,25,12,22,11};
    int n=sizeof(arr)/sizeof(arr[0]);

    printf("Original Array: \n");
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }

    selectionSort(arr,n);

     printf("\nSelection sort: \n");
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    return 0;

}
