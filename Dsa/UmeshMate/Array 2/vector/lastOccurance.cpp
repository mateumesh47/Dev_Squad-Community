#include<iostream>
#include<vector>
using namespace std;
int main()
{   
    vector<int> v;

    v.push_back(0);         
    v.push_back(4);   
    v.push_back(7);   
    v.push_back(3);   
    v.push_back(8);              
    v.push_back(2);   
    v.push_back(1);   
    v.push_back(9);   
    v.push_back(5);

    int n;
    cout<<"Enter number to find last index of given number : ";
    cin>>n;
    int x=-1;
    for(int i=0;i<v.size();i++)
    {  
        if(v[i]==n)   x=i;       
    }
    cout<<x;

}