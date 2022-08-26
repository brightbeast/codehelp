/*#include<iostream>
using namespace std;

oddeve(int a){
    if(a%2==0)
    cout<<"It is even"<<endl;
    else
    cout<<"It is odd"<<endl;
}


int main()
{
    int a;
    cin>>a;
    int ans=oddeve(a);
    
    return 0;
}
*/

#include<iostream>
using namespace std;

int oddeve(int a)
{
    bool n=1;
    if(a%2==0)
    {cout<<"It is even"<<endl;
    n=0;
    }
    if(n==1)
    {
        cout<<"It is odd"<<endl;
    }
}
int main()
{
    int a;
    cin>>a;
    int ans=oddeve(a);
    cout<<ans;

    return 0;
}