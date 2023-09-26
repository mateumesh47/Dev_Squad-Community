#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cout<<"Enter first number:";
    cin>>a;
    cout<<"Enter first number:";
    cin>>b;
    cout<<"Enter first number:";
    cin>>c;
    cout<<"Enter first number:";
    cin>>d;

    if(a>b && a>c && a>d)
    {
        cout<<"Greater number is:"<<a;
    }
    else if(b>a && b>c && b>d)
    {
        cout<<"Greater number is:"<<b;
    }
    else if(c>a && c>b && c>d)
    {
        cout<<"Greater number is:"<<c;
    }
    else
    {
        cout<<"Greater number is:"<<d;
    }
}