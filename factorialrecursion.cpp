#include<iostream>
using namespace std;

int fact(int a)
{
    if(a<=0)
    return 1;
    if(a==1)
    return 1;

    int temp=a*fact(a-1);
    return temp;
}

int main()
{
    int n;
    cin>>n;
    int ans=fact(n);

    cout<<"The factorial of the number is "<<ans;

    return 0;
}