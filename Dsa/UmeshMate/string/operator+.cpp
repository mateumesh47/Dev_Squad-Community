#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str1;
    cout<<"enter a  1st sentence : ";
    getline(cin,str1);

    string str2;
    cout<<"enter a  2st sentence : ";
    getline(cin,str2);

    cout<<str1+" "+str2;

}