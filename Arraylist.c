#include <stdio.h>
int main()
{
    int n, arr[100], i;
    printf("Enter the number of elements in array:");
    scanf("%d", &n);
    printf("Enter the array elements:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Entered Array List Is:");
    for (i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
}