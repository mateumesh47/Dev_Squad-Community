#include<iostream>
using namespace std;
int main()
{
    char ch; 
    cout<<"enter any charecter : ";
    cin>>ch;

    int x=(int)ch;

    if((x>=65 && x<=90) || (x>=97 && x<=122))
    {
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        {
            cout<<"Entered alphabet is vowel";
        }
        else
        {
            cout<<"Entered alphabet is consonant";
        }
    }
    else
    {
        cout<<"Entered charecter is not alphabet";
    }
}