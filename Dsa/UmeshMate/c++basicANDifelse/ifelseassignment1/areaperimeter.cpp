#include<iostream>
using namespace std;
int main()
{
    int r;
    cout<<"Enter the radius of circle :";
    cin>>r;

    float area,circumference;
    area=3.14*r*r;
    circumference=2*3.14*r;
    
    cout<<area<<" is an area of circle \n";
    cout<<circumference<<" is an circumference of circle";

    if(area>circumference)
    {
        cout<<"Area is greater than circumference";
    }
}