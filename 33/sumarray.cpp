#include<iostream>
using namespace std;

int sumarray(int arr[], int size)
{
    if(size<0)
    return 0;

    int sum=arr[size-1]+arr[size-2];
    int bigsum= sum+ sumarray(arr, size-2);
    return bigsum;
}

int main()
{
    int arr[10]={5,6,3,4,7,8,9,1,11,20};
    int size=10;
    int ans= sumarray(arr,size);
    cout<<ans;

    return 0;
} 