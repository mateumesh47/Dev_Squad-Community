#include<iostream>
using namespace std;
int sum(int x,int y)
{
  return x+y;
}
int main()
{   
    int a,b;
    cout<<"Enter value of a:";
    cin>>a;
    cout<<"Enter value of b:";
    cin>>b;

    cout<<sum(a,b);
}