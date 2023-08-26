#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Enter decimal numder number:";
  cin>>n;

  int ans=0;
  int power=1;
  while(n>0)
  {
    int remender=n%2;
    ans=ans+(remender*power);
    power=power*10;
    n=n/2;
  }
  cout<<ans;
}