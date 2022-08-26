#include<iostream>
using namespace std; 
int main()
{
    int arr[10]={2,5,6};
    cout<<"The address of the arr[0] is "<<arr<<endl;
    cout<<"The address of the arr[0] is "<<&arr[0]<<endl;
    cout<<*arr;

    return 0;
}