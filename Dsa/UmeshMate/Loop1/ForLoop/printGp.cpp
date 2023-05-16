#include<iostream>
using namespace std;
int main()
{   
    //we have to print 1 2 4 8...upto nth term 
    int n;
    cout<<"Enter any number :";
    cin>>n;
    int a=1;
    for(int i=1;i<=n;i++)
    {
        cout<<a<<endl;
        a=a*2;
    }
}