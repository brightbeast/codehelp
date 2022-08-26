#include<iostream>
using namespace std;

int f=-1, r=-1;
int arr[5], n=5;

void insert(int data)
{
    if((f==0 && r==n-1))
    {
        cout<<"Overflow1 "<<f<<" "<<r<<endl;
        //cout<<f<<" "<<r<<endl;
        return;
    }

    else{
        if(f==-1 && r==-1)
        {
            f=0;
            r=0;
        }

        else if(r==n-1 && f!=0)
        {
            r=0;
        }
        
        else
        {
            r++;
        }
        arr[r]=data;
    }
    cout<<arr[r]<<" "<<f<<" "<<r<<endl;
}

void remove()
{
    if(f==-1)
    {
        cout<<"Underflow "<<f<<" "<<r<<endl;
        return;
    }

    else
    {
        if(f>r && f==n-1)
        {
            f=0;
            cout<<"remove when f>r "<<f<<" "<<r<<endl;
        }
        else if(f==r)
        {
            f=-1, r=-1;
        }

        else
        {
            f++;
            cout<<"remove when f<r"<<f<<" "<<r<<endl;
        }
    }

}

void printout()
{
    if(r>f)
    {
        for(int i=f; i<=r; i++)
        {
            cout<<arr[i]<<endl;
        }
    }

    else
    {
        for(int i=f; i<n-1; i++)
        {
            cout<<arr[i]<<endl;
        }
        for(int i=0; i<=r; i++)
        {
            cout<<arr[i]<<endl;
        }
    }
}

int main()
{
    insert(10);
    insert(5);
    remove();
    insert(30);
    insert(40);
    insert(90);
    insert(60);

    remove();
    remove();
    remove();
    remove();
    remove();
    remove();
    
    

   // printout();

    return 0;
}