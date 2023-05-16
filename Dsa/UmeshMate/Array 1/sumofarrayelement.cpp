#include<iostream>
using namespace std;
int main()
{ 
    int n;
    cout<<"Enter size of arry : ";
    cin>>n;
    cout<<"Enter elements in array : ";
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }

    cout<<"sum of elements of array : "<<sum;
}