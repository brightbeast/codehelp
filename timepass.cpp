#include <iostream>

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
    int count=1;
        for(int i=0; i<n; i++)
        {
            for(int j=i; i<n; j++)
            {
                if(arr[i]==arr[i+1])
                count++;
            }
            if(count>1)
            {
                cout<<count;
            }
            
        }

    return 0;
}