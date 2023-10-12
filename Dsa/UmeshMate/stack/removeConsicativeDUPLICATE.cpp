#include<iostream>
#include<cstring>
#include<stack>
using namespace std;
void display(stack<char> st)
{
    if(st.size()==0) return;
    char x=st.top();
    st.pop();
    display(st);
    cout<<x;
    st.push(x);
}
void removeconsicativeduplicate(string s)
{
    stack<char> st;
    st.push(s[0]);
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!=st.top()) st.push(s[i]);
    }
    display(st);
}
int main()
{
    string s;
    cout<<"Enter string (like aaabbsddgggjjk):";
    cin>>s;
    removeconsicativeduplicate(s);
    
}