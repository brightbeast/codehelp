#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    // How can we use the xor in this program?
    for(int i=0; i<(n-1); i++)
    {
        if(a[i]-a[n-1]==0)
        {
            cout<<a[i];
            break;

        }
    }
    return 0;
}
/* In this program we are going to find the duplicate of the number.
There will the total n-1 arrays to be filled and the last array will be among the 
remaining arrays. And we have to give the output of that number.
*/
