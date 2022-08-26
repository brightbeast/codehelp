#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<char>ch;
    string name="Prajwal";

    //insert
    for(int i=0; i<name.length(); i++)
    {
        int store=name[i];
        ch.push(store);
    }

    //create ans
    string ans="";

    //insert in ans
    for(int i=0; i<name.length(); i++)
    {
        int store=ch.top();
        ans.push_back(store);
        ch.pop();
    }

    //output
    cout<<ans;

    return 0;
}