#include<iostream>
using namespace std;

class teacher{
    public:

    teacher()
    {
        cout<<"Myself teacher"<<endl;
    }

    string college="GSFC University";
};

class mathteacher: public teacher
{
    public:

    mathteacher()
    {
        cout<<"I am a maths teacher"<<endl;
    }
};


int main()
{

    mathteacher janisir;
    cout <<janisir.college<<endl;

    return 0;
}