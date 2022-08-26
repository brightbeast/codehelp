#include<iostream>
#include<climits>
using namespace std;
int firstoccur(int n,int key, int arr[])
{
    int start=0, end=n-1, ans=-1;
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(arr[mid]==key)
        {
            ans=mid;
            end=mid-1;
        }

        if(arr[mid]>key)
        {
            end=mid-1;
        }

        if(arr[mid]<key)
        {
            start=mid+1;
        }
    }
    return ans;
}

int lastoccur(int n,int key, int arr[])
{
    int start=0, end=n-1, ans=-1;
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(arr[mid]==key)
        {
            ans=mid;
            start=mid+1;
        }

        if(arr[mid]>key)
        {
            end=mid-1;
        }

        if(arr[mid]<key)
        {
            start=mid+1;
        }
    }
    return ans;
}

int main()
{
    int n, key;
    cin>>n>>key;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    
    cout<<"The first occurace is "<<firstoccur(n, key, arr)<<endl;
    cout<<"The last occurace is "<<lastoccur(n, key, arr);
    

    return 0;
}