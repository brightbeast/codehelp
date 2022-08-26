#include<iostream>
using namespace std;

void count(int a)
{
    if(a==0)
    return ;

    cout<<a<<" ";
    count(a-1);    
}

int main()
{
    int n;
    cin>>n;
    count(n);

    return 0; 
}