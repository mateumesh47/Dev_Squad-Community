#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void sum(vector<int>& v)
{
    int n=v.size();
    int target;
    cout<<"enter target";
    cin>>target;
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<n;j++)
       {
          if(v[i]+v[j]==target)
          {
            cout<<"["<<i<<" "<<j<<"]";
          }
       }
    }
}
int main()
{
    vector <int> v;
    int n;
    cout<<"Enter size of vector : ";
    cin>>n;
  

    cout<<"Enter element in vector : ";
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    //sort(v.begin(),v.end());
    sum(v);
}