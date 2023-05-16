#include<iostream>
using namespace std;
int carea(int a)
{
    float area=3.14*a*a;
    return area;
}
int main()
{
    int r;
    cout<<"Enter radius of circle:";
    cin>>r;

    cout<<carea(r);
}