#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string s1, s2, s3;
    string s4="I am the student of GSFC Unviersity";
    cout<<"Enter your name:"<<endl;
    cin>>s1;
    ofstream enter("sample.txt");
    enter<<"My name is "<<s1<<endl;
    enter <<s4;
    enter.close();

    ifstream in("sample.txt");
    getline(in,s2);
    getline(in, s3);
    cout<<endl<<s2<<endl<<s3;
    return 0;
}