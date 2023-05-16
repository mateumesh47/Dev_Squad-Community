#include<iostream>
using namespace std;
int square(int x)
{   int squ;
    for(int i=1;i<=x;i++)
    {
       squ=i*i;
    }
    return squ;
}
int main()
{
    int n;
    cout<<"enter value for finding square";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        cout<<i<<"="<<square(i)<<endl;
    }
}