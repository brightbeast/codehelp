#include<iostream>
using namespace std;
int main()
{
    int n;
    
    cin>>n;
    int array[n];
    for(int i=0; i<n; i++)
    {
        cin>>array[i];
    }
    // Let me check what will happen if we change the value of i from n-1 to n.
    //I am not able to see any difference between n-1 and n
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(array[j]<array[i])
            {
                int temp=array[j];
                array[j]=array[i];
                array[i]=temp;
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        cout<<array[i]<<" ";
    }


    return 0;
}   