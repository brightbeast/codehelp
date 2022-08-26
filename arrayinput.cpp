#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Please enter the number of digits"<<endl;
    cin>>n;
    int array[n];
    for(int i=0; i<n; i++)
    {
        cin>>array[i];
    }
    cout<<"The arrays are"<<endl;

    for(int i=0; i<n; i++)
    {
        cout<<array[i]<<endl;
    }

    return 0;
}