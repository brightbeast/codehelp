#include<iostream>
using namespace std;
int printarray(int arr[], int n)
{
    for(int i=0; i<n; i++)
    cout<<arr[i]<<" ";
}

int sortarray(int arr[], int n)
{
    int start=0, end=n-1;
    while(start<=end)
    {
        while(arr[start]==0)
        start++;

        while(arr[end]==1)
        end--;

        swap(arr[start],arr[end])
        start++;
        end--;
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sortarray(arr, n);
    printarray(arr,n);
    return 0;
}