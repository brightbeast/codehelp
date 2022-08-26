#include<iostream>
using namespace std;

//This is the example of function overriding

class friends{
    public:
    void besharam(){
        cout<<"parent class"<<endl;
    }
};

class dost: public friends{
    public:
    void besharam(){
        cout<<"Child class"<<endl;
    }
};

int main()
{
    friends fu;
    fu.besharam();
    dost bha;
    bha.besharam();

    return 0;
}