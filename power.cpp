#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    //bool z=0;
    for(int i=n; i>1; i--)
    {
        int m=i%2;
        if(m !=0)
        {
            
        
            break;
            //z=1;
        }
        i=i/2;
        i++;
    }
    
    // if(z==1)
    // cout<<"yes";
    // else
    // cout<<"no";
    return 0;
    
}