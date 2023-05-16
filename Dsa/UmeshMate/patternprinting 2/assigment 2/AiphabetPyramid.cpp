#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of row :";
    cin>>n;
    int nsp=n-1;
    int nst=1;

    for(int i=1;i<=n;i++)
    {   
        //spaces
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }

        //alphabet
        for(int k=1;k<=i;k++)
        {   
            int x=i-k+1;
            cout<<(char)(x+64);
        }

        //alphabet
        for(int q=1;q<=i-1;q++)
        {
            cout<<(char)(q+65);
        }
        cout<<endl;
    }
}