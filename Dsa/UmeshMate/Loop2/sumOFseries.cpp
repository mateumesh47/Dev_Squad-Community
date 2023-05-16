#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter any number: ";
    cin>>n;
    int sum=0;
    //1-2+3-4+5-6.....n
    for(int i=1;i<=n;i++)
    {   if(i%2==0)
            sum=sum-i;
        else
            sum=sum+i;
    }
    cout<<sum;
}