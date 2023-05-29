//search sort
#include<iostream>
using namespace std;
//selection sort
int main(){

    int arr[5]={5,4,3,2,1};
    int n=5;
    int min=0;
    int temp=0;
    for(int i=0;i<n-1;i++){
        min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        swap(arr[i],arr[min]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //binary search
    int key=3;
    int low=0;
    int high=n-1;
    int mid=0;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==key){
            cout<<"key found at "<<mid<<endl;
            break;
        }
        else if(arr[mid]>key){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    if(low>high){
        cout<<"key not found"<<endl;
    }
    return 0;


}