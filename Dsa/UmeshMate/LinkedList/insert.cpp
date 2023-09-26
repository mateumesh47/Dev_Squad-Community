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
class linkedlist
{
  public:
  node* head=NULL;
  node* tail=NULL;
  int size;
  linkedlist()
  {
    head=tail=NULL;
    size=0;
  }
  void insertatend(int val)
  {
    node* temp=new node(val);
    if(size==0) head=tail=temp;
    else
    {
      tail->next=temp;
      tail=temp;
    }
    size++;
  }
  void insertathead(int val)
  {
    node* temp=new node(val);
    if(head==NULL) head=tail=temp;
    else
    {
      temp->next=head;
      head=temp;
    }
    size++;
  }
  void insertatidx(int idx,int val)
  {
    if(idx<0 || idx>size) cout<<"invalid idx"<<endl;
    else if(idx==0) insertathead(val);
    else if(idx==size) insertatend(val);
    else
    {
      node* t=new node(val);
      node* temp=head;
      for(int i=1;i<=idx-1;i++)
      {
        temp=temp->next;
      }
      t->next=temp->next;
      temp->next=t;
      size++;
    }
  }
  int getvalue(int idx)
  {
    if(idx<0 || idx>size) 
    {  
      cout<<"invalid idx"<<endl;
      return-1;
    }
    else if(idx==0) return head->val;
    else if(idx==size-1) return tail->val;
    else
    {
      node* temp=head;
      for(int i=1;i<=idx;i++)
      {
        temp=temp->next;
      }
      return temp->val;
    }
  }

  void delateatend()
  {
    if(size==0)
    {
      cout<<"list is empty";
      return;
    }
    node* temp=head;
    while(temp->next!=tail)
    {
      temp=temp->next;
    }
    temp->next=NULL;
    tail=temp;
    size--;
  }  
  void delateathead()
  {
    if(size==0)
    {
      cout<<"list is empty";
      return;
    }
    head=head->next;
    size--;
  }
  void delateatidx(int idx)
  {
    if(idx<0 || idx>=size)
    {
      cout<<"invalid idx";
      return;
    }
    else if(idx==0) delateathead();
    else if(idx==size-1) delateatend();
    else 
    {
      node* temp=head;
      for(int i=1;i<=idx;i++)
      {
        temp=temp->next;
      }
      temp->next=temp->next->next;
      size--;
    }
  }
  void display()
  {
    node* temp=head;
    while(temp!=NULL)
    {
      cout<<temp->val<<" ";
      temp=temp->next;
    }
    cout<<endl;
  }

};
int main()
{
  linkedlist ll;
  ll.insertatend(10);
  ll.display();
  ll.insertatend(20);
  ll.display();
  ll.insertatend(30);
  ll.insertatend(40);
  ll.display();
  ll.insertathead(50);
  ll.insertatidx(2,60);
  ll.display();
  //cout<<ll.getvalue(4);
  ll.delateatend();
  ll.display();
  ll.delateathead();
  ll.display();
  ll.delateatidx(2);
  ll.display();
}