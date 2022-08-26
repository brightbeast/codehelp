#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};

void print(Node* head)
{
    Node* temp= head;
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
        insertAtHead(head, d);
        return;
    }

    Node* temp=head;
    for(int i=1; i<position-1; i++)
    {
        temp=temp->next;
    }

    if(temp->next==NULL)
    {
        insertAtTail(tail, d);
        return;
    }

    Node* newnode= new Node(d);
    newnode->next=temp->next;
    temp->next=newnode;
}

Node* floydcheck(Node* head)
{
    Node* fast=head;
    Node* slow=head;

    while(fast!=NULL)
    {
        fast=fast->next;
        if(fast!=NULL)
        {
            fast=fast->next;
        }
        slow=slow->next;

        if(fast==slow)
        {
            cout<<"Loop is present"<<endl;
            return slow;
        }
    }
        cout<<"Loop is not present"<<endl;
        return NULL;
}

Node* firstelement(Node* head)
{
    Node* intersection= floydcheck(head);
    Node* slow=head;
    while(slow!=intersection)
    {
        slow=slow->next;
        intersection=intersection->next;
    }
    return slow;
}

int main()
{
    Node* newnode=new Node(1);
    Node* head=newnode;
    Node* tail=newnode;
    print(head);

    insertAtHead(head, 0);
    print(head);

    insertAtTail(tail, 2);
    print(head);

    insertAtPosition(head, tail, 1, -1);
    print(head);

    insertAtPosition(head, tail, 5, 4);
    print(head);

    insertAtPosition(head, tail,4,3);
    print(head);

    tail->next=head->next;
    
    Node* chaman=floydcheck(head);
    cout<<"intersection of the element"<<chaman->data<<endl;

    Node* champu=firstelement(head);
    cout<<"starting element of the loop"<<champu->data<<endl;

    return 0;
}