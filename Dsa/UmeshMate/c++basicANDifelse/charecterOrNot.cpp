#include<iostream>
using namespace std;
int main()
{
    char ch; 
    cout<<"enter any charecter:";
    cin>>ch;

    int x=(int)ch;

    if((x>=65 && x<=90) || (x>=97 && x<=122))
    {
        cout<<"It is charecter";
    }
    else
    {
        cout<<"It is not charecter";
    }
}