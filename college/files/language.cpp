#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string st="My name is Prajwal";
    // ofstream output("hello.txt");
    // output<<st;
    
    string s;
    ifstream input("hello.txt");
    getline(input,s);
    input>>s;
    cout<<s;
    return 0;
}