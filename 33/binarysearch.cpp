#include<iostream>
using namespace std;

void printf(int arr[],int s ,int e)
{
    for(int i=s; i<=e; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

bool binarysearch(int arr[], int s, int e, int key)
{
    printf(arr,s,e);
    if(s>e)
    return false;

    int mid=(s+e)/2;

    if(arr[mid]==key)
    return true;

    if(arr[mid]>key)
    {
    bool ans= binarysearch(arr,s,mid-1,key);
    return ans;
    }
        

    else
    {
    bool ans= binarysearch(arr,mid+1,e,key);
    return ans;
    }

   
        
}

int main()
{
    int arr[5]={5,6,14,21,27};
    int s=0;
    int e=4;
    int key=29;

    bool ans=binarysearch(arr,s,e,key);
    cout<<ans;


    return 0;
}