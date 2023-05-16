#include<iostream>
using namespace std;
void display(int a[] ,int s)
{
    for(int i=0;i<s;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    int arr[6]={1,2,5,8,5,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Size of arrayis : "<<size<<endl;
    cout<<"elements in array are : ";
    display(arr,size);
}