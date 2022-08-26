#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};

void print(Node* head, int d)
{
    Node* node1= new Node(d);
    cout<<node1->data;
}

int main()
{
    Node* node1=new Node(12);


    return 0;
}