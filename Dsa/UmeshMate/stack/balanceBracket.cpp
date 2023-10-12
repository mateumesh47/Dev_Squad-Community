#include<iostream>
#include<stack>
#include<cstring>
using namespace std;
bool isbalance(string s)
{
    if(s.length()%2!=0) return false;
    stack<char> st;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='(') st.push('(');
        else
        {
            if(s.length()==0) return false;
            else st.pop();
        }
    }
    if(st.size()==0) return true;
    else return false;
}
int main()
{
   string s;
   cout<<"Enter round bracket string:";
   cin>>s;
   cout<<isbalance(s);
}