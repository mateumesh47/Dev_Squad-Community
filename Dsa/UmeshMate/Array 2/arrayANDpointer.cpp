#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,4,7,2,5};
    int *ptr=arr;
    
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    *ptr=8;    //*ptr=8; --> arr[0]=8
    ptr++;     //go to second element of array 
    *ptr=9;    //enter value atarr[1]=9
    ptr--;    //return at the first elrment of array
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }

}