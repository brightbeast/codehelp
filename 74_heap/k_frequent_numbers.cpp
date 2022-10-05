#include<iostream>
#include<unordered_map>
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

    unordered_map<int,int>mp;

    for(auto i=0; i<n; i++){
        mp[arr[i]]++;
    }

    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

    for(auto i=0; i<mp.size(); i++){
        pq.push({i->second,i->first});
        if(pq.size()>k){
            pq.pop();
        }

        if(pq.size()>k)
        pq.pop();
    }

    while(!pq.empty()){
        cout<<mp.top().second<<" ";
        pq.pop();
    }

    return 0;
}