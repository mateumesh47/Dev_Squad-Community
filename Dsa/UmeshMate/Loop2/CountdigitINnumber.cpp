#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter any number :";
    cin>>n;
    int count=0;

    while(n>0)
    {
        n=n/10;
        count++;
    }
    //for(int i=1;i<=n;i++)
    //{
    //    n=n/10;
    //    count++ ;
    //}
    cout<<count;
}