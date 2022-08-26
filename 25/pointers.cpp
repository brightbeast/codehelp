#include<iostream>
using namespace std;
int main()
{
    int sum=5;
    int *ptr=&sum;
    (*ptr)++;
    cout<<"address using ptr"<<ptr<<endl;
    cout<<"Value"<<*ptr<<endl;
    cout<<"sum value "<<sum<<endl;

    //Method to copy pointer

    int *q=ptr;
    cout<<ptr<<"  "<<q<<endl;
    cout<<*ptr<<"  "<<*q;


    return 0;
}