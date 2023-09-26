#include<iostream>
#include<cstring>
using namespace std;
class person
{
   protected:
   char name[20];
   int code;

   public:
   void pget(char *nm,int c)
   {
     strcpy(name,nm);
     code=c;
   }

   void pdisplay()
   {
     cout<<"Employ details:"<<endl;
     cout<<"Name:"<<name<<endl;
     cout<<"Code"<<code<<endl;
   }
};
class account:virtual public person
{
   protected:
   int pay;
   public:
   void aget(int p)
   {
    pay=p;
   }
   void adisplay()
   {
    cout<<"Amount payed:"<<pay<<endl;
   }
};
class admin:virtual public person
{
    protected:
    int exp;
    public: 
    void adget(int e)
    {
        exp=e;
    }
    void addisplay()
    {
       cout<<"Experience:"<<exp<<endl;
    }
};
class employee:public account,public admin
{
   public:
   void show()
   {
     pdisplay();
     adisplay();
     addisplay();
   }
};
int main()
{
   employee e;
   char nm[20];
   int c,p,ex;

   cout<<"Enter employee details:"<<endl;
   cout<<"Enter name:";
   cin>>nm;
   cout<<"Enter code:";
   cin>>c;
   cout<<"Enter ammount payed:";
   cin>>p;
   cout<<"Enter experiance:";
   cin>>ex;

   e.pget(nm,c);
   e.aget(p);
   e.adget(ex);

   e.show();
}