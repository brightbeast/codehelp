#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;
    int pro=1;
    for(int i=n; i>1; i++)
    {
        int m=i%10;
        sum +=m;
        pro *=m;
        i=(i/10)-1;
    }

    cout<<"sum is"<<sum<<endl;
    cout<<"product is"<<pro<<endl;

    return 0;
}