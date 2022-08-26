#include<iostream>
using namespace std;

void update(int **p)
{
    p=p+1;
    //cout<<p<<endl;
    
    // *p=*p+1;
    //cout<<*p;

    //**p=**p+1;
    //cout<<**p;

}




int main()
{
    int i=5;
    int* m= &i;
    int** m2=&m;
    /*
    cout<<i<<endl;
    cout<<*m<<endl;
    cout<<**m2<<endl;

    cout<<"Address of i"<<endl;
    cout<< m<<endl;
    cout<< *m2<<endl;
    cout<<"Address of m"<<endl;
    cout<<&m<<endl;
    cout<<m2<<endl;
    */
    cout<<endl<<endl;
    cout<<"before the value of i "<<i<<endl;
    cout<<"before the value of m "<<m<<endl;
    cout<<"before the value of m2 "<<m2<<endl;
    update(m2);
    cout<<"after the value of i "<<i<<endl;
    cout<<"after the value of m "<<m<<endl;
    cout<<"after the value of m2 "<<m2<<endl;



    return 0;
}