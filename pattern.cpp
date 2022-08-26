#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the name"<<endl;
    cin>>n;
    int i=1;
    char count='A';
    while(i<n)
    {
        int j=1;
        while(j<n)
        {
            cout<<count<<" ";
            
            j++;
        }
        cout<<endl;
        count++;
        i++;
    }

    return 0;
}

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the number"<<endl;
//     cin>>n;
//     int i=1;
//     while(i<n)
//     {
//         int j=1;
//         int value=i;
//         while(j<i)
//         {
//             cout<<value<<" ";
//             j++;
//             value++;
//         }
//         cout<<endl;
//         i++;
//     }
//     return 0;
// }