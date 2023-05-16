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
    
    int x;
    cout<<"Enter value of x :";
    cin>>x;

    int count=0;
    for(int i=0;i<n;i++)
    {
       if(x<arr[i]) count++;
    }

    cout<<"Number greater than "<<x<<" are "<<count;
}