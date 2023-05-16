#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Emter number of row";
  cin>>n;

  for(int i=1;i<=n;i++)
  {
    //space
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