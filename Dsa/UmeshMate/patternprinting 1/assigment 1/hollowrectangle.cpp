#include<iostream>
using namespace std;
int main()
{
    int n,m;  ////n---->row    m---->coloum
    cout<<"Enter number of row: :";
    cin>>n;
    cout<<"Enter number of row: :";
    cin>>m;

    for(int i=1;i<=n;i++)
    {  
        for(int j=1;j<=m;j++)
        {
           if(j==1 || j==m || i==1 || i==n)
           {
            cout<<"*";
           }          
           else
           {
            cout<<" ";
           }  
        } 
        cout<<endl;
    }
}