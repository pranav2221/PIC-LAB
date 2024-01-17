#include<stdio.h>
int BS(int arr[],int size,int ele)
{
    int low=0;
    int high=size-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==ele)
        {
            return mid;
        }
        else if(arr[mid]<ele)
        {
            low=mid+1;
        }
        else
        {
            high=mid+1;
        }
    }
}
int main()
{
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements in sorted way:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int ele;
    printf("Enter the search number:");
    scanf("%d",&ele);
    int index=BS(arr,n,ele);
    if(index)
    {
        printf("%d element found at %d index",ele,index);
    }
    else
    {
        printf("Element not found");
    }
    return 0;
}