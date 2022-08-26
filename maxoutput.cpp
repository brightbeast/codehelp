#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of no. of inputs"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int mx=INT_MIN;
    for(int i=0; i<n; i++){
        // mx=max(mx,arr[i]);
        // cout<<mx<<" ";
        if(mx<arr[i]){
            mx=arr[i];
            cout<<mx<<" ";
        }
        else{
            cout<<mx<<" ";
        }
    }
    
    

    return 0;
}