#include<iostream>
#include<cstring>
using namespace std;
class student
{
    char name[20];
    char address[20];
    int rollnum;
    int zipcode;

    public:
    student(char *nm,char *ad,int r,int z)
    {
       strcpy(name,nm);
       strcpy(address,ad);
       rollnum=r;
       zipcode=z;
    }

    void show()
    {
        cout<<"------------------------"<<endl;
        cout<<"Student details:"<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"Address:"<<address<<endl;
        cout<<"Roll number:"<<rollnum<<endl;
        cout<<"Zip code:"<<zipcode<<endl;
    }

    ~student()
    {
        cout<<"Memory allocated by object is destroid";
    }
};
int main()
{
    char nm[20];
    char ad[20];
    int r;
    int z;

    cout<<"Enter student details:"<<endl;
    cout<<"Enter name:";
    cin>>nm;
    cout<<"Enter address:";
    cin>>ad;
    cout<<"Enter roll number";
    cin>>r;
    cout<<"Enter zip code:";
    cin>>z;

    student s(nm,ad,r,z);
    s.show();
}