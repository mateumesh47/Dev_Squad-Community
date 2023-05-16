#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of array :";
    cin>>n;
    cout<<"Enter elements in array :";
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    int pro=1;
    for(int i=0;i<n;i++)
    {
        pro=pro*arr[i];
    }

    cout<<"Product of element present in array : "<<pro;
}