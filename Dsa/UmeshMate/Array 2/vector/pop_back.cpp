#include<iostream>
#include<vector>
using namespace std;
int main ()
{
    vector <int> v;
                       //S C           I
    v.push_back(0);   //1  1           0            
    v.push_back(4);   //2  2           1
    v.push_back(7);   //3  4           2
    v.push_back(3);   //4  4           .
    v.push_back(8);   //5  8           .
    v.push_back(2);   //6  8
    v.push_back(1);   //7  8
    v.push_back(9);   //8  8
    v.push_back(5);   //9  16
    v.push_back(3);   //10 16 
    v.push_back(5);   //11 16
    v.push_back(3);   //12 16
    v.push_back(2);   //13 16
    v.push_back(5);   //14 16
    v.push_back(2);   //15 16
    v.push_back(3);   //16 16           .
    v.push_back(5);   //17 32           .
    v.push_back(6);   //18 32          17

    cout<<"Size of given vector : "<<v.size()<<endl;
    cout<<"Capacity of given vector : "<<v.capacity()<<endl;

    //removeing last block element not block of vector
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();

    cout<<"Size of given vector : "<<v.size()<<endl;
    cout<<"Capacity of given vector : "<<v.capacity();
    
}