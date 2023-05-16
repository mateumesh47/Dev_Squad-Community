#include<iostream>
using namespace std;
int main()
{
    int m;
    cout<<"Enter number of month :";
    cin>>m;
    //1 3 5 7 8 10 12->31 dayes
    // 4 6 9 11-> 30 days 
    //2-> 28 or 29 dayes

    switch(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
    {
        case 1:
            cout<<"31 dayes";
    }
    switch(m==4 || m==6 || m==9 || m==11)
    {
        case 1 :
        cout<<"30 dayes";
    }
    switch(m==2)
    {
        case 1 :
            cout<<"if year is leap year then 29 dayes in 2nd month otherwise 28 dayes";
    }

}      