#include<iostream>
#include<stack>
using namespace std;
void display(stack<int>& st)
{
    if(st.size()==0) return;
    int x=st.top();
    st.pop();
    display(st);
    cout<<x<<" ";
    st.push(x);
}
void displayrev(stack<int>& st)
{
    if(st.size()==0) return;
    int x=st.top();
    cout<<x<<" ";
    st.pop();
    displayrev(st);
    st.push(x);
}
int main()
{
    stack<int> st;
    int n;
    cout<<"Enter element in stack (Enter -1 to stop):";
    while(true)
    {
        cin>>n;
        if(n==-1) break;
        st.push(n);
    }

    cout<<"Normal order:";
    display(st);
    cout<<endl;
    cout<<"Reverse order:";
    displayrev(st);
}