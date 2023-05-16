#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter x coordinate :";
    cin>>x;
    cout<<"Enter y coordinate :";
    cin>>y;
     
    if(x==0 && y==0)
    {
        cout<<"line pass through origin";
    }
    else
    {
        if(x==0)
        {
            cout<<"line lies on y-axis";
        }
        else
        {
            cout<<"line lies on x-axis";
        }
    } 
}