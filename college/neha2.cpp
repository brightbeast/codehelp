#include<iostream>
using namespace std;

class student: private marks
{
    public:
    int roll;
    string name;
};

class marks
{
    int s[5], total=0;
    void getdata()
    {
        for(int i=0; i<5; i++)
        {
            cin>>s[i];
        }
    }

    void display()
    {
        for(int i=0; i<5; i++)
        {
            total+=s[i];
        }
        cout<<total;
    }
};

int main()
{
    /* code */
    student s1,s2,s3;
    
    return 0;
}
