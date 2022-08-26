#include<iostream>
using namespace std;

int f=-1, r=-1;
int arr[10], n=10;

void insert(int element)
{
    if(f==0 && r==n-1)
    {
        cout<<"Overflow";
        return;
    }

    else
    {
        //first element
        if(f==-1 && r==-1)
        {
            f=0; 
            r=0;
            arr[r]=element;
        }
        else
        {
            r++;
            arr[r]=element;
        }
    }
}

void remove()
{
    if(f==-1 && r==-1)
    {
        cout<<"Underflow";
        return;
    }

    else
    {
        if(f==r)
        {
            f=-1;
            r=-1;
        }

        else
        {
            f++;
        }

    }


}


void print()
{
    for(int i=f; i<=r; i++)
    {
        cout<<arr[i]<<endl;
    }
}

int main()
{
    insert(5);
    insert(9);
    remove();
    insert(50);
    remove();
    remove();
    insert(8);

    print();


    return 0;
}