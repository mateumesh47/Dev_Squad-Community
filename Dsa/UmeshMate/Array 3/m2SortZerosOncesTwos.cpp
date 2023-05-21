#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void sort01(vector<int>& v)
{
   int lo=0;
   int mid=0;
   int hi=v.size()-1;
   while(mid<=hi)
   {
     if(v[mid]==2)
     {
        int temp=v[mid];
        v[mid]=v[hi];
        v[hi]=temp;
        hi--;

     }
     else if(v[mid]==0)
     {
        int temp=v[mid];
        v[mid]=v[lo];
        v[lo]=temp;
        mid++;
        lo++;
     }
     else
     {
        mid++;
     }
    }
}
int main()
{
    vector <int> v;
    int n;
    cout<<"Enter size of vector : ";
    cin>>n;

    cout<<"Enter element in vector only enter 0,1,2 : ";
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