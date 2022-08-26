#include<iostream>
using namespace std;

int countstair(int n)
{
    if(n<0)
    return 0;

    if(n==0)
    return 1;

    int ans=countstair(n-1)+countstair(n-2);

    return ans;
}

int main()
{
    int n;
    cin>>n;
    int ans=countstair(n);

    cout<<"The number of stair is "<<ans;

    return 0;
}