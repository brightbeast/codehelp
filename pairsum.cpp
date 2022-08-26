#include<iostream>
using namespace std;
int main()
{
    int n,find;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cin>>find;
    int sum=0;

    for(int i=0 ; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            sum=a[i]+a[j];
            if(sum==find)
            {
            int maxno=max(a[i],a[j]);
            int minno=min(a[i],a[j]);
            cout<<minno<<" "<<maxno;
            cout<<endl;
            }
        }
    }


    return 0;
}
