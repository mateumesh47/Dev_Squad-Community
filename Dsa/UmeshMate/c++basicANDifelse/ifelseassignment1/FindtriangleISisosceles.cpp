#include<iostream>
using namespace std;
int main()
{
    int side1,side2,side3;
    cout<<"Enter the length of side1: \n";
    cin>>side1;
    cout<<"Enter the length of side2: \n";
    cin>>side2;
    cout<<"Enter the length of side3: \n";
    cin>>side3;

    if(side1==side2 || side2==side3 || side1==side2)
    {
        cout<<"Triangle is isosceles triangle";
    }
    else
    {
        cout<<"Triangle is not isosceles triangle";
    }
   
}