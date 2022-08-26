// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0; i<n; i++)
//     {
//         cin>>a[i];
//     }
    
//     if(n%2==0)
//     {
//         for(int i=0; i<n-(n/2); i++)
//         {
//             int temp=a[i];
//             a[i]=a[n-i-1];
//             a[n-i-1]=temp;
//         }
//         for(int i=0; i<n; i++)
//      cout<<a[i]<<" ";
//     }

//     else
//     {
//         for(int i=0; i<n-(n/2)-1; i++)
//         {
//             int temp=a[i];
//             a[i]=a[n-i-1];
//             a[n-i-1]=temp;
//         }
//         for(int i=0; i<n; i++)
//      cout<<a[i]<<" ";
//     }
   
//     return 0;
// }

#include<iostream>
using namespace std;

void reverse(int arr[],int n)
{
    int start=0; 
    int end=n-1;
    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void printarray(int arr[],int n)
{
    for(int i=0; i<n; i++)
    cout<<arr[i]<<" ";
    cout<<endl; 
}

int main()
{
    int arr[6]={1,4,0,5,-2,15};
    int brr[5]={2,3,5,7,-89};

    reverse(arr,6);
    reverse(brr,5);
    printarray(arr,6);
    printarray(brr,5);
    return 0;
}