#include<iostream>
using namespace std;
int main()
{
    int l,b; //l-length,b-breadth
    cout<<"Enter length of  rectangle:";
    cin>>l;
    cout<<"Enter breadth of rectangle:";
    cin>>b;
    int area,perimeter;
    area=l*b;
    perimeter=2*(l+b);

    cout<<area<<" is an area of   rectangle \n";
    cout<<perimeter<<" is an perimeter of rectangle";

    if(perimeter<area)
    {
        cout<<"Area is greater than perimeter";
    }
}