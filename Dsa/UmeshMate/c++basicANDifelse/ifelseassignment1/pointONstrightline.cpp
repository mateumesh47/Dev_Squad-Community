#include<iostream>
using namespace std;
int main()
{
    int x1,y1,x2,y2,x3,y3;
    cout<<"enter x1 coordinate:";
    cin>>x1;
    cout<<"enter y1 coordinate:";
    cin>>y1;
    cout<<"enter x2 coordinate:";
    cin>>x2;
    cout<<"enter y2 coordinate:";
    cin>>y2;
    cout<<"enter x3 coordinate:";
    cin>>x3;
    cout<<"enter y3 coordinate:";
    cin>>y3;
    
    if((y2-y1)*(x3-x1)==(y3-y1)*(x2-x1))
    {
        cout<<"Points lies on stright line";
    }
    else
    {
        cout<<"Point does not lies on stright line";
    }
}