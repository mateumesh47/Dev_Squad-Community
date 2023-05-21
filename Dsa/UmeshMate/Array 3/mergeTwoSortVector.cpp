#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> sort01(vector<int>& v1, vector <int> v2)
{
    int x=v1.size();
    int y=v2.size();
    vector<int> res(x+y);
    int i=0;  //v1
    int j=0;  //v2
    int k=0;  //v
    while(i<x && j<y)
    {
       if(v1[i]<v2[j])
       {
          res[k]=v1[i];
          i++;
          k++;
       }
       else
       {
          res[k]=v2[j];
          j++;
          k++;
       }
    }
    while(i<x)
    {
        res[k]=v1[i];
        i++;
        k++;
    }
    while(j<y)
    {
        res[k]=v2[j];
        j++;
        k++;
    }
   return res;

    
}
int main()
{
    vector <int> v1;
    int n;
    cout<<"Enter size of first vector : ";
    cin>>n;

    cout<<"Enter element in vector only enter 0,1,2 : ";
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v1.push_back(x);
    }

    vector <int> v2;
    int m;
    cout<<"Enter size of second vector : ";
    cin>>m;

    cout<<"Enter element in vector only enter 0,1,2 : ";
    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        v2.push_back(x);
    }

    
    vector<int> murge=sort01(v1,v2);
    for(int i=0;i<(n+m);i++)
    {
        cout<<murge[i]<<" ";
    }
    
}