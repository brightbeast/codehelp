#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next=NULL;

    //constructor
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};

void print(Node* head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void insertAtHead(Node* &head, int d)
{
    Node* temp= new Node(d);
    temp->next=head;
    head=temp;
}

void insertAtTail(Node* &tail, int d)
{
    Node* temp=new Node(d);
    tail->next=temp;
    tail=temp;
}

void insertAtPosition(Node* &head, Node* &tail, int position, int d)
{
    if(position==1)
    {
        insertAtHead(head,d);
        return;
    }
    Node* temp=head;
    for(int i=2; i<position; i++)
    {
        temp=temp->next;
    }

    if(temp==NULL)
    {
        insertAtTail(tail,d);
        return;
    }

    Node* newnode=new Node(d);
    newnode->next=temp->next;
    temp->next=newnode;
}

void middle(Node* &head)
{
     z
}

int main()
{
    Node* node1=new Node(12);
    Node* head=node1;
    Node* tail=node1;
    print(head);

    insertAtHead(head,11);
    print(head);

    insertAtTail(tail,14);
    print(head);

    insertAtPosition(head, tail, 3, 13);
    print(head);

    insertAtPosition(head, tail, 1, 10);
    print(head);

    insertAtPosition(head, tail, 6, 15);
    print(head);

    insertAtPosition(head, tail, 1,9);
    print(head);

    cout<<"Middle element of the linked list is ";

    middle(head);

    return 0;
}