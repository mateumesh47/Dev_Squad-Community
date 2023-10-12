#include<iostream>
#include<stack>
using namespace std;
int main()
{
    int n;
    cout<<"Size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter element in array:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    stack<int> st;
    int nge[n-1]=-1;
    // int nge[n];
    // for(int i=0;i<n;i++)
    // {
    //     nge[i]=-1;
    //     for(int j=i+1;j<n;i++)
    //     {
    //         if(arr[j]>arr[i])
    //         {
    //             nge[i]=arr[j];
    //             break;
    //         }
    //     }
    // }
    // for(int i=0;i<n;i++)
    // {
    //     cout<<nge[i]<<" ";
    // }
}