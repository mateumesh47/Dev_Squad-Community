#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Emter number of row";
  cin>>n;

  //LHS space
  for(int i=1;i<=n-1;i++)
  {
   cout<<" ";  
  }
  cout<<"*";  //for topmost star
  cout<<endl;

 

  for(int i=2;i<=n-1;i++)
  { 
    //for lhs star
    for(int j=1;j<=n-i;j++)
    {
      cout<<" ";
    }
    cout<<"*";

    //for rhs star
    for(int k=1;k<=2*(i-1)-1;k++)
    {
      cout<<" ";
    }
    cout<<"*";
    
    cout<<endl;  
  }
}