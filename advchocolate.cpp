#include<iostream>
using namespace std;
int main()
{
    int m,p,w;
    cout<<"Enter the money, price, wrapper"<<endl;
    cin>>m;
    cin>>p;
    cin>>w;
    int d=m/p;
    int sum=0, h=0;
    for(int i=m; i>=1; i--){
        int a=i/w;
        int n=i%w;
        sum=a+n;
        h=a+h;
        i=sum+1;
    }
    int number=d+h;
    cout<<number;

    return 0;
}