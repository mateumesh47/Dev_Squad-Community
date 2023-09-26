#include<iostream>
using namespace std;
class base1
{
    int data1;
    public:
    base1(int i)
    {
        data1=i;
        cout<<"Base1 class constructor called"<<endl;
    }
    void printdatabase1()
    {
        cout<<"The value of data1 is:"<<data1<<endl;
    }
    ~base1()
    {
        cout<<"Base1 class destructor called"<<endl;
    }
};
class base2
{
    int data2;
    public:
    base2(int i)
    {
        data2=i;
        cout<<"Base2 class constructor called"<<endl;
    }
    void printdatabase2()
    {
        cout<<"The value of data2 is:"<<data2<<endl;
    }
    ~base2()
    {
        cout<<"Base2 class destructor called"<<endl;
    }
};
class derive:public base1,public base2
{
    int derive1,derive2;
    public:
    derive(int a,int b,int c,int d):base1(a),base2(b)
    {
        derive1=c;
        derive2=d;
        cout<<"Derived class constructor called"<<endl;
    }
    void printdataderive()
    {
        cout<<"The value of derive1 is:"<<derive1<<endl;
        cout<<"The value of derive2 is:"<<derive2<<endl;
    }
    ~derive()
    {
        cout<<"derive class destructor called"<<endl;
    }
};
int main()
{
   derive d(1,2,3,4);
   d.printdatabase1();
   d.printdatabase2();
   d.printdataderive();
}