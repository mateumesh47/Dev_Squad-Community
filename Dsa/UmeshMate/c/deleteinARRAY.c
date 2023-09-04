#include<stdio.h>
int main()
{
    int n,position;
    printf("Enter size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter element in array:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter position of an element you want to delate:");
    scanf("%d",&position);

    for(int i=position;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    n--;

    printf("Resultant array element:");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}