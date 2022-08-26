#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int i=1;
    while(i<=n)
    {
         int space=n-i;
         while(space)
        {
            cout<<" ";
        space--;
         }

        // for 1st triangle
        int j=1;
        while(j<=i)
        {
            cout<<j;
            j++;
        }

        // for 2nd triangle
        int val=i-1;
        while(val)
        {
            cout<<val;
            val--;
        }
        cout<<endl;
        i++;        
    }
    return 0;
}