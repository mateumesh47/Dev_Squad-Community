#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void sort01(vector<int>& v)
{
    int i=0;
    int j=(v.size())-1;
    while(i<j)
    {
        if(v[i]==0) 
        {
            i++;
        }
        if(v[j]==1) 
        {
            j--;
        }
        
        else
        {
            if(v[i]==1 && v[j]==0) 
            {
                v[i]=0;
                v[j]=1;
                i++;
                j--;
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

    cout<<"Enter element in vector only enter 0,1 : ";
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    sort01(v);
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
}