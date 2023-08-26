#include<iostream>
using namespace std;
int main()
{
    int x,temp;
    cout<<"Enter value of x";
    cin>>x;
    while(x!=0)
    {
        temp=x;
        x=x&(x-1);
    }
    cout<<temp*2<<endl;
}