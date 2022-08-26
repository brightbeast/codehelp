#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    char a[n+1];
    cin.getline(a,n);
    cin.ignore();
    int i=0, currLen=0, maxLen=0, st=0, maxSt=0;
    while(i<n)
    {
        if(a[i]=" " || a[i]=='\0')
        {
            if(currLen>maxLen)
            {
                st=i+1;
                currLen=0;
            }
            else
            currLen++;
        }
        cout<<a<<endl;
        cout<<maxLen<<endl;
        for(int i=0; i<maxLen; i++)
        cout<<a[maxSt+i];
        cout<<endl;
    }

    return 0;
}