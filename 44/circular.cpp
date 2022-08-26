#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }

    ~Node()
    {
        int value=this->data;
        if(this->next != NULL)
        {
            delete next;
            this->next=NULL;
        }
        cout<<"Memory is free for node with data"<<value<<endl;
    }
};

void InsertNode(Node* tail, int element, int d)
{
    //empty list
    if(tail==NULL)
    {
        Node* newNode= new Node(d);
        tail=newNode;
        //newnode->next=newnode;
        //assuming that the element is present in the list
        Node*curr=tail;
        while(curr->data !=element)
        {
            curr=curr->next;
        }

        //element found->curr is representing element wala node
        Node*temp=new Node(d);
        temp->next=curr-> next;
        curr->next=temp;
    }
}

void print(Node*tail)
{
    Node*temp=tail;
    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }
    while(tail !=temp);
    cout<<endl;
}

int main()
{
    Node*tail=NULL;
    //empty list me insert karre hai
    InsertNode(tail,1,3);
    print (tail);
    return 0;
}