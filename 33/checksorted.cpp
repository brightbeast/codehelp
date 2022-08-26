#include<iostream>
using namespace std;

bool check(int arr[], int size)
{
    if(size==0 || size==1)
    return true;

    if(arr[0]>arr[1])
    return false;

    else
    {
        bool ans= check(arr+1, size-1);
        return ans;
    }

    
}

int main()
{
    int arr[5]={2,3,4,1,8};
    bool ans= check(arr,5);
    cout<<ans;

    return 0;
}