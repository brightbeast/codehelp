#include<iostream>
using namespace std;

void solve(int arr[], int n, int index, int output)
{
    if(index>=n)
    {
        cout<<output ;
        return;
    }

    //exclude
    solve(arr,n,index+1,output);

    //include
    cout<<arr[index]<<endl;
    solve(arr,n,index+1, output);

}

int main()
{
    int arr[3]={1,2,3};
    int n=3;
    int output=0;
    int index=0;
    solve(arr, n, index, output);

    return 0;
}