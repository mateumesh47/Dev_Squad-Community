#include<iostream>
using namespace std;
int main()
{
    int A,B,C;
    cout<<"Enter marks obtain in subject A:";
    cin>>A;
    cout<<"Enter marks obtain in subject B:";
    cin>>B;
    cout<<"Enter marks obtain in subject C:";
    cin>>C;

    if(A<B)
    {
        if(A<C)
        {
            cout<<"'A' has least maek";
        }
    }
    else
    {
        if(B<C)
        {
            cout<<"'B' has least mark";
        }
        else
        {
            cout<<"'C' has least marks";
        }
    }
    
}
