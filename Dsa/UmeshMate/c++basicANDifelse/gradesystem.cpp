#include<iostream>
using namespace std;
int main()
{
    int m;
    cout<<"Enter a marks obtain in exam :";
    cin>>m;

   // if(m>=91 && m<=100)
   // {
   //     cout<<"Excellent";
   // }
   // if(m>=81 && m<=90)
   // {
   //     cout<<"Very good";
   // }
   // if(m>=71 && m<=80)
   // {
   //     cout<<"Good";
   // }
   // if(m>=61 && m<=70)
   // {
   //     cout<<"Can do better";
   // }
   // if(m>=51 && m<=60)
   // {
   //     cout<<"Average";
   // }
   //if(m>=41 && m<=50)
   // {
   //     cout<<"Below average";
   // }
   //if(m<=40)
   //{
   // cout<<"Fail";
   //}

   if(m>=91 && m<=100)
   {
       cout<<"Excellent";
   }
   else
   {
    if(m>=81 && m<=90)
    {
        cout<<"Very good";
    }
    else
    {
        if(m>=71 && m<=80)
        {
            cout<<"Good";
        }
        else
        {
            if(m>=61 && m<=70)
            {
                cout<<"Can do better";
            }
            else
            {
                if(m>=51 && m<=60)
                {
                    cout<<"Average";
                }
                else
                {
                    if(m>=41 && m<=50)
                    {
                        cout<<"Below average";
                    }
                    else
                    {
                        if(m<=40)
                        {
                            cout<<"Fail";
                        }
                    }
                }
            }
        }
    }
   }
}

