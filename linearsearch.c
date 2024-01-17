#include<stdio.h>
int LS(int arr[],int n,int ele)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==ele)
        {
            return i;
        }
    }
    return 0;
}
int main()
{
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements:"); 
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int ele;
    printf("Enter the search number:");
    scanf("%d",&ele);
    int index=LS(arr,n,ele);
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