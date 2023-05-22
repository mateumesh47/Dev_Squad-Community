#include<iostream>
using namespace std;

int main(){
    //sum of all even number
    int a;
    cin >> a;
    int sum=0;
    int i= 2;
    while (i<=a)
    {
        if (i%2==0)
        {
            sum+=1;
            /* code */
        }
        i+=1;
        
        /* code */
    }
    cout << sum << endl;
    
       
    return 0;

}