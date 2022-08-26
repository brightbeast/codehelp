#include<iostream>
#include<stack>
using namespace std;

//create class
class Stack
{
    public:
    int size;
    int *arr;
    int top;

    public:
    Stack(int size)
    {
        this->size=size;
        top=-1;
        arr=new int[size];
    }

    void insert(int element)
    {
        if(size-top>1)
        {
            top++;
            arr[top]=element;
        }
        else 
        cout<<"Stack overflow"<<endl;
    }

    void remove()
    {
        //if(top>=0)
        if(top!=-1)
        top--;
        else
        cout<<"Stack underflow"<<endl;

    }

    void peek()
    {
        //if(top>=0)
        if(top!=-1)
        cout<<arr[top]<<endl;
        else
        cout<<"Stack underflow"<<endl;
    }

    bool isempty()
    {
        if(top!=-1)
        return false;

        else
        return true;

    }

};

int main()
{
    Stack st(5);
    st.insert(1);
    st.insert(2);
    st.insert(3);
    st.insert(4);
    st.insert(5);

    st.peek();
    st.remove();
    st.peek();
    if(st.isempty()==true)
    cout<<"The stack is empty";
    else
    cout<<"The stack is not empty";
    // cout<<st.peek()<<endl;

    return 0;
}