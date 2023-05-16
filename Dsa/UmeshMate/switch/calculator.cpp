#include<iostream>
using namespace std;
int main()
{
    int a,b;
    char op;
    cout<<"Enter 1st number :";
    cin>>a;
    cout<<"Enter 2nd number";
    cin>>b;
    cout<<"Enter \n +->addtion \n -->subtraction \n *->multiplication \n /->division \n";
    cin>>op;

    switch(op)
    {
        case '+':
           cout<<a+b;
           break ;
        case '-':
           cout<<a-b;
           break ;   
        case '*':
           cout<<a*b;
           break ;
        case '/':
           cout<<a/b;
           break ; 
        default :
           cout<<"Enter correct operater";            
    }        

}