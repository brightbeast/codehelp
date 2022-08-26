#include<iostream>
using namespace std;

//It is also the example of function overloadingc (compile-time polymorphism)

class mathematics
{
    public:                                             
    int add(int num1, int num2)
    {return num1+num2;}

    int add(int num1, int num2, int num3)
    {return num1+num2+num3;}
};

int main()
{
    mathematics add;
    cout<<add.add(3,4,5)<<endl;
    cout<<add.add(3,4)<<endl;
    return 0;
}