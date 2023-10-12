#include<iostream>
#include<vector>
using namespace std;
class Stack
{
   public:
   vector<int> v;
   void push(int val)
   {
    v.push_back(val);
   }
   int top()
   {
    if(v.size()==0)
    {
        cout<<"Stack is empty:";
        return -1;
    }
    return v[v.size()-1];
   }
   int size()
   {
    return v.size();
   }
};
int main()
{
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    cout<<st.size();
}