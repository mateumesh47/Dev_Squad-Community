#include<stdio.h>
int main()
{
    int n,element,position;
    printf("Enter size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter element in array:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter position of element that you want to insert:");
    scanf("%d",&position);
    printf("Enter element that you want to insert:");
    scanf("%d",&element);

    for(int i=n;i>=position;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[position]=element;
    n++;
    printf("Resultant array element:");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}