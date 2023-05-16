#include<iostream>
using namespace std;
int main()
{
    int c,s;  //c-costprice,s-sellingprice
    cout<<"Enter cost price:";
    cin>>c;

    cout<<"Enter selling price:";
    cin>>s;

    if(s>c)
    {
        cout<<"profit of:";
        cout<<s-c;
    }
    else
    {
        cout<<"loss of:";
        cout<<s-c;
    }
}