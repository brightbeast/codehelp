#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int array[n];
    for(int i=0; i<n; i++)
    {
        cin>>array[i];
    }
    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum=sum+array[i];
    }
    cout<<"The sum of the number is"<<" "<<sum;


    return 0;
}