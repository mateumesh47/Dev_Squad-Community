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
        for(int j=1;j<=n+1-i;j++)
        {
            cout<<" ";
        }

        //star
        for(int j=1;j<=2*i-1;j++)
        {
            cout<<(char)(j+64);
        }
        cout<<endl;
    }
}