#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number";
    cin>>n;
    int i= n;
    while(i>=1)
    {
        int j=i;
        while(j>=1)
        {
            cout<<"*";
            j--;
        }
        cout<<endl;
        i--;
    }
   /* for(int i=n; i>=1; i--)
    {
        for(int j=i; j>=1; j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }*/
    return 0;
}