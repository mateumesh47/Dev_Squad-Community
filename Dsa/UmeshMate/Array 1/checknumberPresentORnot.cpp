#include<iostream>
using namespace std;
int main()
{
    int n,x;
    cout<<"Enter size of array :";
    cin>>n;
    cout<<"Enter elements in array :";
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter a number for checking";
    cin>>x;

    bool flag=false;

    for(int i=0;i<n;i++)
    {
        if(x==arr[i])  flag=true;
    }

    
}