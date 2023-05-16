#include<iostream>
using namespace std;
int main()
{
    int x; 
    cout<<"enter any number:";
    cin>>x;
    if(x>99 && x<1000)
    {
        cout<<"Entered number is three digit";
    }
    else
    {
        cout<<"Entered number is not three digit number";
    }
}