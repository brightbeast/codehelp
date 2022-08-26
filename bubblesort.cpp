// #include<iostream>
// using namespace std; 
// int main()
// {
//     cout<<"Enter the number"<<endl;
//     int n;
//     cin>>n;
//     int array[n];
//     for(int i=0; i<n; i++)
//     {
//         cin>>array[i];
//     }
    
//     for(int i=1; i<n; i++){
//         for(int j=0;j<n-1; j++){
//             if(array[i]>array[j]){
//                 int temp=array[j];
//                 array[j]=array[i];
//                 array[i]=temp;
//             }
//         }
//     }
//     for(int i=1; i<n; i++)
//     {
//         cout<<i<<" ";
//     }

//     return 0;
// }


#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the no."<<endl;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        for(int j=1; j<n-i; j++){
            if(arr[j]<arr[j-1]){
                // int temp=arr[j-1];
                // arr[j-1]=arr[j];
                // arr[j]=temp;
                swap(arr[j],arr[j-1]);
            }
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}