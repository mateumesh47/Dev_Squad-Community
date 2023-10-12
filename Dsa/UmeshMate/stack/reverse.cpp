#include<iostream>
#include<stack>
using namespace std;
void print(stack<int> st)
{
    stack<int> temp;
    while(st.size()>0)
    {
        temp.push(st.top());
        st.pop();
    }
   
    while(temp.size()>0)
    {
        cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();
    }
}
int main()
{
    stack<int> st;
    // int n;
    // cout<<"Enter the size of stack:";
    // cin>>n;
    // cout<<"Enter element in array:";
    // while(n>0)
    // {
    //     int x;
    //     cin>>x;
    //     st.push(x);
    // }
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    cout<<"Stack:";
    print(st);

    stack<int> gt;
    stack<int> rt;

    //st----->gt
    while(st.size()>0)
    {
        gt.push(st.top());
        st.pop();
    }

    //gt----->rt
    while(gt.size()>0)
    {
        rt.push(gt.top());
        gt.pop();
    }

    //rt----->st
    while(rt.size()>0)
    {
        st.push(rt.top());
        rt.pop();
    }
    cout<<endl<<"Stack:";
    print(st);
}