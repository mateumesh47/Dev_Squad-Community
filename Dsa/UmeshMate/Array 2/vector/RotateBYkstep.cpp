#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& a)
{
    for(int i=0;i<a.size();i++)
    {
       cout<<a[i]<<" ";
    }
    cout<<endl;
}

void reversepart(int i,int j,vector<int> &q)
{
   while(i<=j)
   {
    int temp=q[i];
    q[i]=q[j];
    q[j]=temp;
    i++;
    j--;
   }
}

int main()
{
    vector <int> v;
    int n;
    cout<<"Enter size of vector : ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    
    int k;
    cout<<"How many time you want rotate your vector : ";
    cin>>k;

    if(k>n)  k=k%n;

    reversepart(0,n-k-1,v);
    reversepart(n-k,n-1,v);
    reversepart(0,n-1,v);
    display(v);
}