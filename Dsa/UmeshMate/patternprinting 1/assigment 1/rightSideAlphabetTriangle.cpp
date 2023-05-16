#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of line :";
    cin>>n;

    for(int i=1;i<=n;i++)
    {  //for spce
       for(int j=1;j<=n-i;j++)
        {
            cout<<" ";    
        }

        //for star
        int a=1;
        for(int k=1;k<=i;k++)
        {
            cout<<(char)(a+64);
            a++;
        }
        cout<<endl;
    }
}