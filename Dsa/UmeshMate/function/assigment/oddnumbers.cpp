#include<iostream>
using namespace std;
int odd(int x,int y)
{
  for(int i=x;i<=y;i++)
   {
       if(i%2!=0)
       {
        cout<<i<<" ";
       }
   }
}
int main()
{
   int a,b;
   cout<<"Enter first number :";
   cin>>a;
   cout<<"Enter second number :";
   cin>>b;

   odd(a,b);
}