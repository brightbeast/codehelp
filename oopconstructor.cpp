#include<iostream>
using namespace std;

class democonstructor
{
    public:
    democonstructor()
    {
        cout<<"I am constructor"<<endl;
    }

    ~democonstructor()
    {
        cout<<"I am destructor"<<endl;
        /* In the destructor it is executed after the entire program is done*/
    }
};

class add
{
    public:
    add(int a, int b)
    {
        cout<<"The sum of two number is "<<a+b<<endl;
    }
};

int main()
{
    democonstructor obj;
    add object(10, 23);


    return 0;
}