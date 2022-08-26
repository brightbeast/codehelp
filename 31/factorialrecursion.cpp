#include<iostream>
using namespace std;

int factorial(int n)
{
    //base case
    if(n==0)
    {
        return 1;
    } 

    int smallproblem=  factorial(n-1)  ;
    int bigproblem= n*smallproblem;

    return bigproblem;

    /*
    Instead of line from 12-15 we can replace it from return n*factorial(n-1);
    */

}



int main()
{
    int n;
    cin>>n;
    int ans=factorial(n);
    cout<<ans;

    return 0;
}