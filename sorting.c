#include<stdio.h>
void BS(int a[],int size)
{
    for(int i=-0;i<size-1;i++)
    {
      for(int j=0;j<size-i-1;j++)
      {
        if(a[j]>a[j+1])
        {
            int temp=a[j+1];
            a[j+1]=a[j];
            a[j]=temp;
        }
      }
    }
}
void SS(int a[],int size)
{
    for(int i=0;i<size-1;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
}
void IS(int a[],int size)
{
    for(int i=-0;i<size-1;i++)
    {
        int j=i;
        while(j>0 && a[j-1]>a[j])
        {
            int temp=a[j-1];
            a[j-1]=a[j];
            a[j]=temp;
            j--;
        }
    }
}
int main()
{
    int size;
    printf("Enter the size of array");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of array:\n");
    for(int i=0;i<size;i++)
    {
        printf("Element%d:",i+1);
        scanf("%d",&arr[i]);
    }
    // BUbble Sort
    printf("\nBubble Sort:\n");
    BS(arr,size);
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    // Selection Sort
    printf("\nSelection Sort:\n");
    BS(arr,size);
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    // Insertion Sort
    printf("\nInsertion Sort:\n");
    BS(arr,size);
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}