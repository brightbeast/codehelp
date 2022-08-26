#include<iostream>
using namespace std;

class Hero{
    // as deafault it is in private
    public:
    char name[100];
    int health;
    char level;

    void gethealth()
    {
        health=95;
        cout<<health;
        cout<<" It is the health of Ramesh"<<endl;
    }

};

int main()
{
    Hero Ramesh;
    Ramesh.gethealth();
    
    return 0;
}