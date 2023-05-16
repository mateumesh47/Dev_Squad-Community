#include<iostream>
using namespace std;
int main()
{
    int m;
    cout<<"Enter number of month :";
    cin>>m;

    switch(m)
    {
        case 1 :
            cout<<"31 dayes in january";
            break ;
        case 2 :
            cout<<"if year is leap year then 29 dayes in 2nd month otherwise 28 dayes";
            break ;
        case 3 :
            cout<<"31 dayes in march";
            break ;
        case 4 :
            cout<<"30 dayes in april";
            break ;
        case 5 :
            cout<<"31 dayes in may";
            break ;
        case 6 :
            cout<<"30 dayes in june";
            break ;             
        case 7 :
            cout<<"31 dayes in july";
            break ;
        case 8 :
            cout<<"31 dayes in augest";
            break ;
        case 9 :
            cout<<"30 dayes in september";
            break ;
        case 10 :
            cout<<"31 dayes in october";
            break ;
        case 11 :
            cout<<"30 dayes in november";
            break ;
        case 12 :
            cout<<"31 dayes in december";
            break ;        
        default :
            cout<<"Enter valid number";

    }
}