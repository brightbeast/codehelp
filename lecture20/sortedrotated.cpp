#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int main()
{
    vector<int> a;
    a.push_back(3);
    a.push_back(4);
    a.push_back(5);
    a.push_back(1);
    a.push_back(2);

    int mino=INT_MAX;

    //getting the minimum number
    for(int i=0; i< a.size(); i++)
    {
        mino= min(a[i],mino);
    }

    //from the above we get the "mino" as minimum number

    for(int i=0; i<a.size(); i++)
    {
        a[i]=

    }



    return 0;
}