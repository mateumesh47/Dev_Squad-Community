#include<iostream>
using namespace std;
int swap(int *x,int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a,b;
    cout<<"Enter value of a: ";
    cin>>a;
    int* p=&a;

    cout<<"Enter value of a: ";
    cin>>b;
    int* q=&b;

    cout<<"value before swaping"<<endl;
    cout<<"a="<<a<<endl<<"b="<<b<<endl;

    swap(&a,&b);
    cout<<"value after swaping"<<endl;;
    cout<<"a="<<a<<endl<<"b="<<b;

} 