#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(3);
    v.push_back(5);
    v.push_back(6);
    v.push_back(9);
    v.push_back(10);

    cout<<"Before rotation"<<endl;

    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }

    cout<<endl<<"After rotation"<<endl;

    int k=1;
    int n=INT_MAX;
    vector<int>temp(v.size());
    for(int i=0; i<v.size(); i++)
    {
       temp[(i+k)%v.size()]= v[i];
    }

    for(int i=0; i<v.size(); i++)
    {
        cout<<temp[i]<<" ";
    }

    return 0;
}