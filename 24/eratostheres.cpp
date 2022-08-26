#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int cnt=0;
    int n,value;
    vector<int>v;

    cin>>n;

   vector<bool>prime(n+1, true);
   prime[0]=prime[1]= false;
   for(int i=2; i<n; i++)
   {
       if(prime[i])
       {
           cnt++;
           for(int j=2*i; j<n; j=j+i)
           {
               prime[j]=0;
           }
           cout<<cnt<<endl;
       }
   }

    return 0;
}