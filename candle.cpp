#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout<<"Please enter the no. of children";
    cin>>n;
    int array[n];
    for(int i=0; i<n; i++)
    {
        cin>>array[i];
    }
    int maxno=INT_MIN;
    for(int i=0; i<n; i++)
    {
    maxno= max(array[i], maxno);
    
    }
    cout<<"The maximum number of candle are "<<" "<<maxno;
    return 0;
    


}