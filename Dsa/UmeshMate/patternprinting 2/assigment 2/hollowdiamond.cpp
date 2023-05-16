#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of line :";
    cin>>n;
    
    //for middle single star only
    for(int i=1;i<=n-1;i++)
    {
       cout<<" "; 
    }
    cout<<"*";
    cout<<endl;
    
    //for upper star only
    for(int i=2;i<=n-1;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        cout<<"*";
        for(int k=1;k<=2*(i-1)-1;k++)
        {
            cout<<" ";
        }
        cout<<"*";
        cout<<endl;
    }

    //for lowwer v shape
    for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=2*n-1;j++)
    {
      if(j==i || j==2*n-i)
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