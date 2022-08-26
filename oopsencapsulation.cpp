#include<iostream>
using namespace std;

class student
{
    private:
    int age;
    string name;
    int hegiht;
   
    public:
    int getAge()
    {
        return this->age;
    }
};

int main()
{
    student first;
    cout<<"All good"<<endl;

    return 0;
}