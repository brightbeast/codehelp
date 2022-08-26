#include<iostream>
using namespace std;

class Hero{
    int health;

    public:
    char level;
    
    int getHealth(){
        return health;
    }
    void setHealth(int h){
        health=h;
    }
    

};

int main()
{
    Hero ramesh;
    //cout<<"size: "<<sizeof(h1)<<endl;
    //ramesh.health=70;
    ramesh.level='A';
    cout<<"health is "<<ramesh.getHealth()<<endl;
    ramesh.setHealth(79);
    cout<<"health is "<<ramesh.getHealth()<<endl;

    cout<<"level is "<<ramesh.level<<endl;

    return 0;
}