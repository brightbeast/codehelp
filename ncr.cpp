#include<iostream>
using namespace std;
int fact(int a)
{
    int mult=1;
    for(int i=1; i<=a; i++)
    {mult*=i;}
    return mult;
}
int ncr(int n, int r)
{
    //numerator
    int a=fact(n);

    //denominator
    int b=fact(r)*fact(n-r);
    
    int c=a/b;

    return c;
   
}
int main()
{
    int n,r;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    cout<<"Enter the value of r"<<endl;
    cin>>r;
    int ans=ncr(n,r);
    cout<<"The value of nCr is "<<ans<<endl;
    return 0;
}