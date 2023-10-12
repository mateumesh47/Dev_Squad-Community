#include<iostream>
#include<stack>
using namespace std;
void display(stack<int> st)
{
    if(st.size()==0) return;
    int x=st.top();
    st.pop();
    display(st);
    cout<<x<<" ";
    st.push(x);
}
void pushatbottom(stack<int>& st,int val)
{
    if(st.size()==0) 
    {
        st.push(val);
        return;
    }
    int x=st.top();
    st.pop();
    pushatbottom(st,val);
    st.push(x);
}
void reversestore(stack<int>& st)
{
    if(st.size()==1) return;
    int x=st.top();
    st.pop();
    reversestore(st);
    pushatbottom(st,x);
}
int main()
{
    stack<int> st;
    int n,val;
    cout<<"Enter element in stack (Enter -1 to stop):";
    while(true)
    {
        cin>>n;
        if(n==-1) break;
        st.push(n);
    }
    cout<<"After inserting:";
    reversestore(st);
    display(st);
}