#include<iostream>
#include<queue>

using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    cin>>arr[i]; 

    int k;
    cin>>k;
    
    priority_queue<int, vector<int>, greater<int>> pq; 
    int count=0;
    for(int i=0; i<n; i++)
    {
        pq.push(arr[i]);
        if(pq.size()>k){
            arr[count++]=pq.top();
            pq.pop();
        }
    }

    while(!pq.empty()){
        for(int i=count; i<n; i++){
            arr[i]=pq.top();
            pq.pop();
        }
    }

    for(int i=0; i<n; i++)
    cout<<arr[i]<<" ";

    return 0;
}