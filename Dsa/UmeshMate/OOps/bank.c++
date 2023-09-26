#include<iostream>
#include<cstring>
using namespace std;
class bank
{
    public:
    string acname;
    string actype;
    int acnum;
    int acbal;

    void diposit()
    {
       int diposit;
       cout<<"Enter amount to be deposit:";
       cin>>diposit;
       acbal+=diposit;
       cout<<"Balance after diposit:"<<acbal<<endl;
    }

    void withdraw()
    {
        int withdraw;
        cout<<"Enter amount to withdraw:";
        cin>>withdraw;
        if(acbal<withdraw)
        {
            cout<<"There is no sufficient balance:"<<endl;
        }
        else
        {
            acbal-=withdraw;
        }
        cout<<"Amount after withdraw:"<<acbal<<endl;
    }

    void display()
    {
        cout<<"--------------------------"<<endl;
        cout<<"Account details:"<<endl;
        cout<<"Account holder name:"<<acname<<endl;
        cout<<"Account type:"<<actype<<endl;
        cout<<"Account number:"<<acnum<<endl;
        cout<<"Account balance:"<<acbal<<endl;
    }
};
int main()
{
    bank op;
    cout<<"Enter account holder name:";
    cin>>op.acname;
    cout<<"Enter account type:";
    cin>>op.actype;
    cout<<"Enter account number:";
    cin>>op.acnum;
    cout<<"Enter balance:";
    cin>>op.acbal;

    op.diposit();
    op.withdraw();
    op.display();

}