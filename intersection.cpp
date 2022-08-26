#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    int i,j;
    int arr1[m],arr2[n];
    for(i=0; i<m; i++)
    {
        cin>>arr1[i];
    }
    for(int j=0; j<n; j++)
    {
        cin>>arr2[j];
    }
    //Checking the condition for the loop
    for(int i=0; i<m; i++)
    {
       // int element=arr1[i];
        for(int j=0; j<n; j++)
        {
            if(arr1[i]==arr2[j])
            {
                cout<<arr2[j]<<" ";
                arr2[j]=INT_MAX;
                break;
            }
            
        }
    }
   
    return 0;
}