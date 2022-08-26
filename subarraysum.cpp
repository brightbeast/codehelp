// #include<iostream>
// using namespace std;
// int main()
// {   
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0; i<n; i++){
//         cin>>a[i];
//     }
//     int curr=0;
//     for(int i=0; i<n; i++){
//         curr=0;
//         for(int j=i; j<n; j++){
//             curr += a[j];
//             cout<<curr<<endl;
//         }
//     }
    


//     return 0;
// }


#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        int value=i;
        while(j<=i)
        {
            cout<<value<<" ";
            j++;
            value--;
        }
        cout<<endl;
        i++;
    }
    return 0;
}