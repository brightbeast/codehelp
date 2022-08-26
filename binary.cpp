#include<iostream>
using namespace std;
int main()
{
    int n, key;
    cin>>n;
    cin>>key;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    //execution of binary search
    int start=0, end=n-1;
     
    while(start<=end)
    {
       int mid=start+(start+end)/2;
       if(arr[mid]==key)
       {
           cout<<++mid;
           break;
       }

       if(key>arr[mid])
       {
           start=++mid;
       }

       if(key<arr[mid])
       {
           end=--mid;
       }
       // Instead of this int mid=(start+end)/2; we will use mid=(start)+(start+end)/2 because in this case it will be in the range of the integer i.e. 2^31-1
        
    }
    return 0;
}