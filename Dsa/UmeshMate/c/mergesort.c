#include <stdio.h>
void merge(int a[],int n1,int b[],int n2,int arr[])
{
  int i=0;
  int j=0;
  int k=0;
  while(i<n1 && j<n2)
  {
   if(a[i]<b[j])
   {
     arr[k]=a[i];
     k++;
     i++;
   }
   else
   {
     arr[k]=b[j];
     k++;
     j++;
   }
  }
  if(i==n1)
  {
    while(j<n2)
    {
      arr[k]=b[j];
      k++;
      j++;
    }
  }
  if(j==n2)
  {
    while(i<n1)
    {
     arr[k]=a[i];
     k++;
     i++;
    }
  }
}

void mergesort(int arr[],int n) 
{
  if(n==1) return;
  int n1=n/2,n2=n-n/2;
  int a[n1],b[n2];
    
  for(int i=0;i<n1;i++)
  {
    a[i]=arr[i];
  } 

  for(int i=0;i<n2;i++)
  {
    b[i]=arr[i+n1];
  }

  mergesort(a,n1);
  mergesort(b,n2);

  merge(a,n1,b,n2,arr);
}

int main() 
{
  int n;
  printf("Enter array size:");
  scanf("%d",&n);
  int arr[n];
  printf("Enter elements in array:");
  for(int i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }

  mergesort(arr,n);

  printf("Sorted array: \n");
  for(int i=0;i<n;i++)
  {
    printf("%d  ",arr[i]);
  }
}