#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"enter a sentence : ";
    getline(cin,str);

    int i=0;
    int count=0;
    while(str.length()<i)
    {
       if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
       {  
           count++;
           i++;
       }
    }
    cout<<"Number of vowels : "<<count;
}