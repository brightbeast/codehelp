#include<iostream>
using namespace std;

int fibonacci(int a)
{
    if(a<0)
    return 0;

    if(a==0)
    return 1;

    int ans= fibonacci(a-1)+fibonacci(a-2);

    return ans;
}


int main()
{
    int n;
    cin>>n;

    //function call
    int ans=fibonacci(n);
    cout<<"Your desire element is "<<ans;
    return 0;
}