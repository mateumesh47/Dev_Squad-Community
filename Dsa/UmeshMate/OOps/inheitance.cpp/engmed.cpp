#include<iostream>
#include<cstring>
using namespace std;
class medical
{
  public:
  void medicaldisplay()
  {
    cout<<"Medical student details:"<<endl;
  }
};
class engineering
{
   public:
   void engineeringdisplay()
   {
    cout<<"Engineering student details:"<<endl;
   }
};
class student:public medical,public engineering
{
   public:
   int rollnumber;
   void displayroll()
   {
      cout<<"Roll number:"<<rollnumber<<endl;
   }

};
class person:public student
{
   public:
   string name;
   string gender;
   int age;
   
   void meddisplay()
   {
      medicaldisplay();
      cout<<"Name:"<<name<<endl;
      displayroll();
      cout<<"Gender:"<<gender<<endl;
      cout<<"Age:"<<age<<endl;
      cout<<"-------------------------"<<endl;
   }
   void engdisplay()
   {
      engineeringdisplay();
      cout<<"Name:"<<name<<endl;
      displayroll();
      cout<<"Gender:"<<gender<<endl;
      cout<<"Age:"<<age<<endl;
   }
};
int main()
{
   person med;
   cout<<"Enter medical student details:"<<endl;
   cout<<"Enter name:";
   cin>>med.name;
   cout<<"Enter roll number:";
   cin>>med.rollnumber;
   cout<<"Enter gender:";
   cin>>med.gender;
   cout<<"Enter age:";
   cin>>med.age;
   cout<<"-----------------------------"<<endl;

   person eng;
   cout<<"Enter engineering student details:"<<endl;
   cout<<"Enter name:";
   cin>>eng.name;
   cout<<"Enter roll number:";
   cin>>eng.rollnumber;
   cout<<"Enter gender:";
   cin>>eng.gender;
   cout<<"Enter age:";
   cin>>eng.age;
   cout<<"******************************"<<endl;

   med.meddisplay();
   eng.engdisplay();
}