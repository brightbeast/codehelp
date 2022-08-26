#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};

void print(Node* &head)
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
    Node* temp=new Node(d);
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
    for(int i=1; i<position-1; i++)
    {
        temp=temp->next;
    }
    if(temp==NULL)
    {
        insertAtTail(tail,d);
        return;
    }

    Node* node=new Node(d);
    node->next=temp->next;
    temp->next=node;
}

void ReverseRecursion(Node* &head, Node* &pre, Node* &curr)
{
    if(curr==NULL)
    {
        head=pre;
        return;
    }
    Node* forward=curr->next;
    ReverseRecursion(head,curr,forward);
    curr->next=pre;
}

int main()
{
    Node* node= new Node(1);
    Node* head=node;
    Node* tail=node;
    print(head);

    insertAtHead(head,0);
    print(head);

    insertAtTail(tail,3);
    print(head);

    insertAtPosition(head,tail,1,-1);
    print(head);

    insertAtPosition(head, tail,5,4);
    print(head);

    insertAtPosition(head, tail,4,2);
    print(head);

    Node* pre=NULL;
    Node* curr=head;
    ReverseRecursion(head,pre, curr);
    cout<<"Reverse linked list is "<<endl;
    print(head);


    return 0;
}