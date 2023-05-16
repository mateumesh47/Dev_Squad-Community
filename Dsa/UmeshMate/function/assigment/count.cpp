#include<iostream>
using namespace std; 
// int square(int n)
// {
//     return n*n;
// }

int countnumberofdigit(int num)
{
    int ans=0;
    while(num>0)
    {
        ans++;
        num=num/10;
    }
    return ans;
}

int main()
{
    int num;
    cout<<"enter any number";
    cin>>num;
    // int numberofdigit=countnumberofdigit(num);
    // cout<<square(numberofdigit)<<endl; 
    cout<<countnumberofdigit(num);
    return 0;
}