#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of line :";
    cin>>n;

    for(int i=1;i<=n;i++)
    {   int a=1;
        for(int j=1;j<=i;j++)
        {   
            char ch=(char)a+64;
            cout<<ch<<" ";
            a++;
        }
        
        cout<<endl;
    }
}