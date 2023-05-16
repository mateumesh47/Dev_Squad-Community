#include<iostream>
using namespace std;

int fact(int m)                     // 1st fumction
{
    int f=1;
    for(int i=2;i<=m;i++)
    {
        f=f*i;
    }
    return f;
}

int combination(int n,int r)         //2nd function
{
    int ncr=fact(n)/(fact(r)*fact(n-r)); // 1st function calling
    return ncr;
}

int main()                            //main function
{
    int n;
    cout<<"Enter number of line :";
    cin>>n;

    for(int i=0;i<=n;i++)
    {
    for(int j=0;j<=i;j++)
    {
        cout<<combination(i,j)<<" ";     // 2nd function calling
    }
    cout<<endl;
    }
}