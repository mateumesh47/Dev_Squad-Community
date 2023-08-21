#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>& a,vector<int>& b,vector<int>& res)
{
   int i=0;
   int j=0;
   int k=0;
   while(i<a.size() && j<b.size())
   {
    if(a[i]<b[j])
    {
        res[k]=a[i];
        k++;
        i++;
    }
    else
    {
        res[k]=b[j];
        k++;
        j++;
    }
   }
   if(i==a.size())
   {
    while(j<b.size())
    {
        res[k]=b[j];
        k++;
        j++;
    }
   }
   if(j==b.size())
   {
    while(i<a.size())
    {
    res[k]=a[i];
    k++;
    i++;
    }
   }
}
void mergesort(vector<int>& v)
{
    int m=v.size();
    if(m==1) return;
    int n1=m/2,n2=m-m/2;
    vector<int> a(n1),b(n2);
    
    for(int i=0;i<n1;i++)
    {
        a[i]=v[i];
    }

    for(int i=0;i<n2;i++)
    {
        b[i]=v[i+n1];
    }

    mergesort(a);
    mergesort(b);

    merge(a,b,v);
    
}
int main()
{
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    vector<int> v(arr,arr+n);
    mergesort(v);
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
}