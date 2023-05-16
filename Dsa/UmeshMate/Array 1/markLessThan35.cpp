#include<iostream>
using namespace std;
int main()
{   int n;
    cout<<"Enter number of student :";
    cin>>n;
    cout<<"Enter marks in array :";
    int mark[n];

    for(int i=0;i<n;i++)
    {
        cin>>mark[i];
    }

    for(int i=0;i<n;i++)
    {
        if(mark[i]<35)
        {
            cout<<i<<" ";
        }
    }
}
