#include<iostream>
using namespace std;
bool check(int n)
{
    
    // 1 for composite
    // 0 for prime
    for(int i=2; i<n; i++)
    {
        if(n%i==0)
        return 1;
        else
        return 0;
    }
}
int main()
{
    int n;
    int m=check(n);
    if(check(n)==1)
    cout<<"Composite";
    else
    cout<<"Prime";
    return 0;
}