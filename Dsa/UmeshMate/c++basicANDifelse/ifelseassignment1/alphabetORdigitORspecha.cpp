#include<iostream>
using namespace std;
int main()
{
    char ch; //ch-alphabet/special chrecter/digit
    cout<<"Enter any chrecter:";
    cin>>ch;

    if(((ch>='a') && (ch<='z')) || ((ch>='A') && (ch<='Z')) )   
    {
        cout<<"Entered charecter is alphabet";
    }
    else
    {   
        if(ch>='0' && ch<='9')            //it for oniy 0 to 9 digit
        {
            cout<<"Entered chrecter is digit";
        }
        else
        {
            cout<<"Entered chrecter is special chrecter";
        }
    }
}