#include<iostream>
using namespace std;

class student
{
    string name;
    int roll;
    public:
    void getdata1()
    {
        cin>>name>>roll;
    }
    void display1()
    {
        cout<<name<<endl<<roll<<endl;
    }
};

class marks: private student
{
    int s[5], total=0;
    public:
    void getdata2()
    {
        getdata1();
        for(int i=0; i<5; i++)
        {
            cin>>s[i];
        }
    }

    void display2()
    {
        display1();
        for(int i=0; i<5; i++)
        {
            total+=s[i];
        }
        cout<<total;
    }

};

int main()
{
    marks m;
    m.getdata2();
    m.display2();
    return 0;
}