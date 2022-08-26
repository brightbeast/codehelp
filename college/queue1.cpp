#include<iostream>
using namespace std;

int a[10];
int n=10;
int f=-1, r=-1;

void insert(int d)
{
    if(r-f>=n-1)
    {
        cout<<"Overflow"<<" "<<f<<" "<<r<<endl;
        return;
    }

    else
    {
        if(f==-1 && r==-1)
        {
            f=0; 
            r=0;
            a[r]=d;
        }
        else
        {
            r++;
            a[r]=d;
        }
    }
    cout<<a[r]<<" "<<f<<" "<<r<<endl;

}

void remove()
{
    if(f==-1)
    {
        cout<<"Underflow"<<endl;
        return;
    }

    else
    {
        f++;
    }


}

void printout()
{
    for(int i=f; i<=r; i++)
    {
        cout<<a[i]<<endl;
    }
}

int main()
{

    insert(1);
    insert(2);
    remove();
    remove();
    remove();
    insert(3);
    insert(4);
    insert(5);
    remove();
    insert(6);
    insert(7);
    remove();
    remove();
    remove();
    insert(8);
    insert(9);
    insert(10);
    insert(11);
    insert(12);
    insert(13);
    insert(14);
    insert(15);
    insert(16);
    insert(17);
    insert(18);
    remove();
    insert(1);
    
    //printout();
    



    return 0;
}