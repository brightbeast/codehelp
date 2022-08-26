#include<iostream>
using namespace std;

void solve(int arr[], int ans, int index, int n)
{
    int count=0;
    if(index>=n)
    {
        count++;
        for(int i=0; i<n; i++)
        {
            cout<<arr[i];
        }
        cout<<endl;
        cout<<count<<endl;
        return;
    }

    for(int i=index; i<n; i++)
    {
        swap(arr[index],arr[i]);

        solve(arr,ans,index+1,n);
        swap(arr[index],arr[i]);
    }

}

int main()
{
    int arr[4]={3,2,4,1};
    int n=4;
    int index=0;
    int ans=0;
    solve(arr, ans,index,n);

    return 0;
}