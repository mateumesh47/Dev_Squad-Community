#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter value of a: ";
    cin>>a;
    int *p=&a;

    cout<<"Enter value of b: ";
    cin>>b;   
    int *q=&b;

    c=(*p)*(*q);
    cout<<"multiplication="<<c;
}