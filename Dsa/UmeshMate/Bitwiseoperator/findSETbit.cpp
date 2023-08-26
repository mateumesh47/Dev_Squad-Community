#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Enter decimal number number:";
  cin>>n;
//   cout<<__builtin_popcount(n);
    
    int count=0;
    while(n>0)
    {
        count++;
        n=(n & (n-1));
    }
    cout<<count;
}