#include<iostream>
using namespace std; 
int main()
{
    cout<<"Enter the number"<<endl;
    int n, array[n];
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>array[i];
    }
    for(int i=1; i<n; i++){
        for(j=0;j<n-1; j++){
            if(a[i]>a[j]){
                int temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    for(int j=1; j<n; j++)
    {
        cout<<j<<" ";
    }

    return 0;
}