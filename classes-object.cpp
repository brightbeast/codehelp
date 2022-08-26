#include<iostream>
using namespace std;

class car
{
    public:
    int speed;
    char color[10];

    void getfunction(int milee, int fuel, int tyresize)
    {
        cout<<"The milage of the car is "<<milee<<" and it has the capacity of "<<fuel<<" L and the size of the tyre is "<<tyresize<<endl;

    }

};

int main()
{
    car jaguar;
    jaguar.getfunction(43, 233, 6);
    cout<<jaguar.speed=23;
    cout<<jaguar.color=black;


    return 0;
}