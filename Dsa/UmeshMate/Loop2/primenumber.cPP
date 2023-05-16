#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter any number :";
    cin>>n;
    bool flag=true;
    for(int i=2;i<=n-1;i++)
    {
        if(n%i==0)
        {
            flag=false;
            break;
        }
    }
    if(n==1)
    {
        cout<<"1 is not prime or composit number";
    }
    else
    {
        if(flag==true)
        {
            cout<<"Entered number is prime number";
        }
        else
        {
            cout<<"Entered number is composit number";
        }
    }
}