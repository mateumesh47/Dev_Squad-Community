#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void sort01(vector<int>& v)
{
    int n=v.size();
    int noo=0;
    int noz=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]==0) noz++;
        else noo++;
    }
    for(int i=0;i<n;i++)
    {
        if(i<noz) v[i]=0;
        else v[i]=1;
    }
}
int main()
{
    vector <int> v;
    int n;
    cout<<"Enter size of vector : ";
    cin>>n;

    cout<<"Enter element in vector only enter 0,1 : ";
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    //sort(v.begin(),v.end());
    sort01(v);
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
}