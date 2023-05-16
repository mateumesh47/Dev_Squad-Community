#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> v;
                        //index
    v.push_back(6);        //0
    v.push_back(5);        //1
    v.push_back(3);        //2
    v.push_back(9);       // 3
    v.push_back(7);        //4
    v.push_back(4);        //5

    //To print perticular indexth element
    cout<<v.at(4)<<endl;

    //to change value of perticular index
    v.at(2)=8;
    cout<<v.at(2); 
}