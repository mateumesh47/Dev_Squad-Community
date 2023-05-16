#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter any number:";
    cin>>x;

    if((x%3==0 || x%5==0) && x%15!=0)
    {
        cout<<"Entered number is divisible by 3or5 but not 15";
    }
    else
    {
        cout<<"not matching given condition";
    }

}