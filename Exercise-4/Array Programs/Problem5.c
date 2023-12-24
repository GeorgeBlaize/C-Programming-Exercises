
//Binary search

#include<stdio.h>

int binarySearch(int arr[],int low,int high,int key)

{

    while(low<=high){

        int mid=low+(high-low)/2;

        if(arr[mid]==key)
            return mid;
        else if(arr[mid]<key)
            low = mid+1;
        else
            high=mid-1;
    }

    return -1;
}

int main()
{

    int n,key;

    printf("Enter the number of elements in the array :");
    scanf("%d",&n);

    int arr[n];

    printf("Enter %d sorted elements in ascending order:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);

    printf("Enter the element to search: ");
    scanf("%d",&key);

    int result=binarySearch(arr,0,n-1,key);

    if(result!=-1)
        printf("Enter %d found at index %d.\n",key,result);
    else
        printf("Element %d not found in the array.\n",key);

    return 0;

}
