#include<iostream>
#include<cstring>
using namespace std;
class employee
{
    string name;
    int salary;
    public:
    void get()
    {
        cout<<"Enter name:";
        cin>>name;
        cout<<"Enter salary:";
        cin>>salary;
        cout<<"----------------------"<<endl;
    }
    void display()
    {
        cout<<"Employee name:"<<name<<endl;
        cout<<"Employee salary:"<<salary<<endl;
    }
};
int main()
{
   employee emp;
   emp.get();
   cout<<"First employ details:"<<endl;
   emp.display();
   cout<<"*********************"<<endl;
   emp.get();
   cout<<"Second employee details:"<<endl;
   emp.display();
}
// #include<iostream>
// #include<cstring>
// using namespace std;
// class employee
// {
//     string name;
//     int salary;
//     public:
//     employee()
//     {
//         cout<<"Enter name:";
//         cin>>name;
//         cout<<"Enter salary:";
//         cin>>salary;
//         cout<<"----------------------"<<endl;
//     }
//     void display()
//     {
//         cout<<"Employee name:"<<name<<endl;
//         cout<<"Employee salary:"<<salary<<endl;
//     }
// };
// int main()
// {
//    employee emp1;
//    cout<<"First employ details:"<<endl;
//    emp1.display();
//    cout<<"*********************"<<endl;
//    employee emp2;
//    cout<<"Second employee details:"<<endl;
//    emp2.display();
// }