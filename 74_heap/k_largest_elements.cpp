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
    //min heap
    priority_queue<int,vector<int>, greater<int>> pq;

    for(int i=0; i<n; i++)
    {
        pq.push(arr[i]);
        if(pq.size()>k)
        pq.pop();
    }

    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }

    return 0;
}