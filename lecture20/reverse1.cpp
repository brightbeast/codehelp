// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main()
// {
//     int a;
//     cin>>a;
//     int arr[a];
//     for(int i=0; i<a; i++)
//     {
//         cin>>arr[i];
//     }

//     //execution of code
//     int s=0; int e=a-1;
//     while(s<=e)
//     {
//         if(arr[e]<arr[s]){
//             swap(arr[e],arr[s]);
//         }
//         s++;
//         e--;
//         cout<<arr[s]<<endl;
//     }

//     for(int i=0; i<a; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }




#include<iostream>
#include<vector>
using namespace std;

//vector<int> ans =reverse(a);
vector<int> reverse(vector<int>v)
{
    int s=0, e=v.size()-1;
    while(s<=e)
    {
            swap(v[s],v[e]);
        s++;
        e--;
    }

    return v;

}

void print(vector<int>v)
{
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}


int main()
{
    vector<int>a;
    a.push_back(11);
    a.push_back(7);
    a.push_back(3);
    a.push_back(2);
    a.push_back(4);

    vector<int> ans =reverse(a);
    cout<<a.size()<<endl;
    

    print(ans);

    return 0;
}

/*
void reverseArray(vector<int> &arr , int m)
{
    int s=m+1, e=arr.size()-1;
    while(s<=e)
    {
            swap(arr[s],arr[e]);
        s++;
        e--;
    }

    

}
*/


































































