#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void sort01(vector<int>& v)
{
    int i=0;
    int j=(v.size())-1;
    while(i<=j)
    {
        if(v[i]<0 && v[j<0]) i++;
        else if(v[i]>0 && v[j]<0)
        {
            int temp=v[i];
            v[i]=v[j];
            v[j]=temp;
            i++;
            j--;
        }
        else if(v[i]>0 && v[j]>0) j--;
        else
        {
            i++;
            j--;
        }
    }
}
int main()
{
    vector <int> v;
    int n;
    cout<<"Enter size of vector : ";
    cin>>n;

    cout<<"Enter positive & negative in vector : ";
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