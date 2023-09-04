#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter size of 1st array:");
    scanf("%d",&n);
    printf("Enter size of 2st array:");
    scanf("%d",&m);
    int arr[n][m];
    printf("Enter element in matrix:");
    for(int i=0;i<n;i++)
    {
       for(int j=0;j<m;j++)
       {
        scanf("%d",&arr[i][j]);
       }
    }

    printf("orignal matrix:\n");
    for(int i=0;i<n;i++)
    {
       for(int j=0;j<m;j++)
       {
         printf("%d ",arr[i][j]);
       }
       printf("\n");
    }

    printf("transpose matrix:\n");
    for(int i=0;i<n;i++)
    {
       for(int j=0;j<m;j++)
       {
         printf("%d ",arr[j][i]);
       }
       printf("\n");
    }
}