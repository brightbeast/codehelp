#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int ans=-1,s=0, e=n-1;
    while(s<=e)
    {
        int mid=(s+e)/2;

        if(mid*mid==n)
        {
           ans=mid;
            
        }
        
        if(mid*mid>n)
        e=mid-1;

        if(mid*mid<n)
        {
            ans=mid;
            s=mid+1;
        }
        
    }

    cout<<ans;

    return 0;
}