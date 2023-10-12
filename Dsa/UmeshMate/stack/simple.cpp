#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int> st,temp;

    //cout<<st.size()<<endl;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    st.push(70);
    //cout<<st.size()<<endl;
    st.pop();
    //cout<<st.size()<<endl;
    cout<<"Top most element:"<<st.top()<<endl;
    
    //stack printing but at the end stack was empty
    // while(st.size()>0)
    // {
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }
  
    //stack printing at the end stack was copy into another stack
    cout<<"reverse order:";
    while(st.size()>0)
    {
        cout<<st.top()<<" ";
        int x=st.top();
        st.pop();
        temp.push(x);
    }
    cout<<endl<<"temp size:"<<temp.size()<<endl;
    cout<<"st size:"<<st.size()<<endl;

    //temp----->st copy
    cout<<"normal order:";
    while(temp.size()>0)
    {
        cout<<temp.top()<<" ";
        int x=temp.top();
        temp.pop();
        st.push(x);
    }
    cout<<endl<<"temp size:"<<temp.size()<<endl;
    cout<<"st size:"<<st.size();
}