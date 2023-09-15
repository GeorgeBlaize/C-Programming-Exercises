//Insertion Sort Program in C

#include<stdio.h>

void insertionSort(int arr[],int n){
    int key,j;
    for(int i=1; i<n; i++){
        key=arr[i];
        j=i-1;


        while( j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j=j-1;
        }

        arr[j+1]=key;

    }

}



int main()
{

    int arr[]={64,34,25,12,22,11,90};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("Original Array: ");
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }

    insertionSort(arr,n);

    printf("\nInsertion Sort array: ");
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);

    }

    return 0;
}
