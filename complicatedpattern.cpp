#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    int i=1;
    while(i<=n)
    {
        //for 1st traingle
        int j=1;
        while(j<=n-i+1)
        {
            cout<<j;
            j++;
        }


        // for 1st star
        int m=1;
        while(m<=i-1)
        {
            cout<<"*";
            m++;
        }

        // for 2nd star
         int d=1;
         while(d<=i-1)
         {
             cout<<"*";
             d++;
         }

         // for 2nd triangle
         int z=1;
         int val=z;
         while(z<=n+val-i)
         {
             cout<<n-z-i+2;
             z++;
         }
        cout<<endl;
        i++;

    }
    return 0;
}