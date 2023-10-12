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
    int n;
    cout<<"Enter element in stack (Enter -1 to stop):";
    while(true)
    {
        cin>>n;
        if(n==-1) break;
        st.push(n);
    }
    
    print(st);
    cout<<endl;
    stack<int> temp;
    int num;
    cout<<"Enter a number to insert:";
    cin>>num;

    while(st.size()>0)
    {
        temp.push(st.top());
        st.pop();
    }
    st.push(num);
    while(temp.size()>0)
    {
        st.push(temp.top());
        temp.pop();
    }

    print(st);
}