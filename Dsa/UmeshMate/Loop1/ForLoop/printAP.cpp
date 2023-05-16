#include<iostream>
using namespace std;
int main()
{
    //we have to print 1 3 5 7 9.....nth term
    int n;
    cout<<"Enter any number :";
    cin>>n;
    int a=1;
    for(int i=1;i<=n;i++)
    {
        cout<<a<<endl;
        a=a+2;
    }

    //OROROROR
    //for(int i=1;i<=2*n-1;i=i+2)
    //{
    //   cout<<i<<endl;
    //}
}