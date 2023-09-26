#include<iostream>
#include<cstring>
using namespace std;
class student
{
   public:
   string name;
   int mark;
   int rollnum;
   student(string n,int m,int r)
   {
    name=n;
    mark=m;
    rollnum=r;
   }

};
int main()
{
   student s("umesh",88,42);
   student* ptr=&s;
   cout<<(*ptr).name<<endl;
   ptr->name="sahil";
   cout<<(*ptr).name<<endl;
}