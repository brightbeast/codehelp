#include<iostream>
using namespace std;

void insert(int d, int &f, int &r, int size, int arr[])
{
    if(r-f>=size-1)
    {
        cout<<"Overflow"<<endl;
        return;
    }

    else
    {
        if(f==-1 && r==-1)
        {
            f=0; 
            r=0;
            arr[r]=d;
        }
        else
        {
            r++;
            arr[r]=d;
        }
    }

}

void remove(int &f, int &r, int arr[])
{
    if(f==-1 && r==-1)
    {
        cout<<"Underflow"<<endl;
        return;
    }

    else
    {
        f++;
    }


}

void printout(int &f, int &r, int arr[])
{
    for(int i=f; i<=r; i++)
    {
        cout<<arr[i]<<endl;
    }
}

int main()
{
    int a[5];
    int n=5;
    int f=-1, r=-1;

    insert(5,f,r,n, a);
    insert(9,f,r,n, a);
    remove(f,r,a);
    insert(50,f,r,n, a);
    remove(f,r,a);
    remove(f,r,a);
    insert(8,f,r,n, a);
    printout(f,r,a);
    
    



    return 0;
}