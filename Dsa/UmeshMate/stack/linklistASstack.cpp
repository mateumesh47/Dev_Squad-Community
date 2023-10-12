#include<iostream>
using namespace std;
class node
{
    public:
   int val;
   node* next;
   node(int val)
   {
    this->val=val;
    this->next=NULL;
   }
};
class Stack
{
    public:
    int size;
    node* head;
    Stack()
    {
        head=NULL;
        size=0;
    }
    void push(int val)
    {
        node* temp=new node(val);
        temp->next=head;
        head=temp;
        size++;
    }
    int pop()
    {
        if(head==NULL)
        {
            cout<<"Stack is empty:";
            return -1;
        }
        head=head->next;
        size--;
    }
    int top()
    {
        if(head==NULL)
        {
            cout<<"Stack is empty:";
            return -1;
        }
        return head->val;
    }

    
    void print(node* temp)
    {
        if(temp==NULL) return;
        print(temp->next);
        cout<<temp->val<<" ";
    }
    void display()
    {
        node* temp=head;
        print(temp);
        cout<<endl;
    }
};
int main()
{
   Stack st;
   cout<<st.top()<<endl;
   st.push(10);
   st.push(20);
   st.push(30);
   st.push(40);
   cout<<st.size<<endl;
   cout<<st.top()<<endl;
   st.display();
}