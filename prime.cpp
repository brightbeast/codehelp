/*#include<iostream>
using namespace std;
int main()
{
int n,a;
cout<<"Enter the number"<<endl;
cin>>n;
for(int i=2; i<=n-1; i++)
{
    // if(n%i==0)
    // {
    //     cout<<"Composite"<<endl;
    // }
    // else
    // {
    //     cout<<"Prime"<<endl;
    // }
    int m=n%i;
    if(m==0)
    {
        cout<<"Composite"<<endl;
        break;
        
    }
    else
    {
        cout<<"Prime"<<endl;
        
    }
}
    return 0;
}

*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    bool m=1;
    for(int i=2; i<n; i++)
    {
        if(n%i==0)
        m=0;
        break;
    }

    if(m==0)
    cout<<"It is a prime number";
    else
    cout<<"It is a composite number";
    return 0;
}