#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    //execution of code

    for (int i=0; i<n; i++)
    {
        if(i==0)
        {
            for( int j=i+1; j<n; j++)
        {
            if(j!=0)
            {
                swap(arr[i],arr[j]);
                break;
            }
        }

        }
    }

    //output
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}