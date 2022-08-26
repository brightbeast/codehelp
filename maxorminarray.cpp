#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int array[n];
    for(int i=0; i<n; i++)
    {
        cin>>array[i];
    }

    int maxno=INT_MIN, minno=INT_MAX;
    for(int i=0; i<n; i++)
    {
         //We can use this also 
        maxno=max(maxno,array[i]);
        minno=min(minno,array[i]);
        
       /* if (array[i]>max)
        {
            maxno=array[i];
        }
        if (array[i]<min)
        {
            minno=array[i];
        }
        */
    }
    cout<<"The maximum no. is"<<maxno<<endl<<"The minimum no. is"<<minno;




    return 0;
}