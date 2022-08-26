#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        // for(int j=1; j<=n; j++)
        // {
        //    if(int m=i-1) 
        //    cout<<" ";
        //    else
        //    cout<<"h";
        // }
        // cout<<endl;
        for(int j=0; j<i; j++)
        {
            cout<<" ";
            for(int m=n; m>=1; m++)
        {
            cout<<"*";
        }
        }
        
        cout<<endl;
    }
    return 0;
}