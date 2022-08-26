#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n, value=0;
    vector<int>v;
    cout<<"The size of vector";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>value;
        v.push_back(value);
    }

    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<endl;
    }


    return 0;
}