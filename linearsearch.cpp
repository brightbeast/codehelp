#include<iostream>
using namespace std;
bool size(int arr[],int n)
{
    for(int i=0; i<9; i++)
    {
        if(arr[i]==n)
        return 1;
    }

    return 0;
}
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int n;  
    cin>>n;
   bool m= size(arr[10],n);
   if(m)
   cout<<"Yes the number is present"<<endl;
   else
   cout<<"The number is not present"<<endl;
   return 0;
}