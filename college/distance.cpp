#include<iostream>
using namespace std;

class Employee
{
    int year;
    string name, address;

    public:
    void getdata()
    {
        cin>>name>>year>>address;
    }

    void output(Employee e1, Employee e2, Employee e3)
    {
        cout<<"Name "<<" Year of joining "<<" Address"<<endl;
        cout<<e1.name<<"  "<<e1.year<<"  "<<e1.address<<endl;
        cout<<e2.name<<"  "<<e2.year<<"  "<<e2.address<<endl;
        cout<<e3.name<<"  "<<e3.year<<"  "<<e3.address<<endl;

    }

};

int main()
{
    Employee e1,e2,e3,e4;
    e1.getdata();
    e2.getdata();
    e3.getdata();
    e4.output(e1,e2,e3);
    return 0;
}