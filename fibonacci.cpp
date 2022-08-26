#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int a=0, b=1;
    cout<<a<<","<<b;
    int sum=0;
    for(int i=2; i<n; i++)
    {
        sum=a+b;
        cout<<","<<sum;
        a=b;
        b=sum;
    }
    return 0;
}