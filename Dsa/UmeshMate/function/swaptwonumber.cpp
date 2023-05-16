#include<iostream>
using namespace std;
int swp(int x,int y)
{
    int c;
    c=x;
    x=y;
    y=c;
   cout<<"value after swaping"<<endl;
   cout<<"value of a:"<<x<<endl<<"value of b:"<<y;
}
int main()
{
    int a,b;
    cout<<"Enter value of a:";
    cin>>a;
    cout<<"Enter value of b:";
    cin>>b;
    swp(a,b);
}