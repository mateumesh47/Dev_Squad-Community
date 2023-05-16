#include<iostream>
using namespace std;
int fact(int a)
{
    int f=1;
    for(int i=2;i<=a;i++)
    {
        f=f*i;
    }
    return f;
}
int combination(int x,int y)
{
    int ncr=fact(x)/fact(x-y);
    return ncr;
}
int main()
{
    int n,r;
    cout<<"Enter value of n :";
    cin>>n;
    cout<<"Enter value of r :";
    cin>>r;

    cout<<combination(n,r);
}