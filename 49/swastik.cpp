
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
   
        //1st line
            cout<<"*";
            for(int m=2; m<=2*n; m++)
            {
                if(m<n)
                cout<<" ";
                else
                cout<<"*";
            }
            cout<<endl;
       
        //rest of the remaining in the middle part
        for(int i=2; i<n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                if(j==1 || j==n)
                cout<<"*";
                else cout<<" ";
            }
            cout<<endl;
        }
       
        //last line of half
       
            for(int i=1; i<=n*2; i++)
            {
                cout<<"*";
               
            }
            cout<<endl;
           
            //rest of the remaining in the middle part
        for(int i=2; i<n; i++)
        {
            for(int j=1; j<=2*n; j++)
            {
                if(j==2*n || j==n)
                cout<<"*";
                else cout<<" ";
            }
            cout<<endl;
        }
       
        //last line
        for(int i=1; i<2*n; i++)
        {
            if(i<=n)
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<"*";
       
    return 0;
}
