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
    for(int j=1;j<=2*n;j++)
    {
      if(j==i || j==n-i+1)
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