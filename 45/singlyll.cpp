#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor call
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }

};

void print(Node* &head)
{
    Node* temp=head;

    while(temp !=NULL)
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

    int cnt=1;
    Node* temp=head;
    while(cnt<position-1)
    {
        temp=temp->next;
        cnt++;
    }
    //inserting at Last position 
    if(temp ->next==NULL)
    {
        insertAtTail(tail,d);
        return;
    }

    //creating a node for d
    Node*nodeToInsert=new Node(d);
    nodeToInsert -> next=temp ->next;
    temp->next=nodeToInsert;

}

void reverse(Node* &head)
{
    Node* curr=head;
    Node* pre=NULL;
    Node* forward=curr->next;

    while(curr!=NULL)
    {
        //cout<<curr->data<<" ";
        curr->next=pre;
        pre=curr;
        curr=forward;
        forward=curr->next;
        //cout<<head->data<<endl;
        // cout<<"the reverse linked list of the singly LL is "<<endl;
        //head=curr;
        //print(head);
        cout<<"Hello";
    }
    head=pre;
    cout<<"reverse linked list is "<<endl;
    cout<<"hello"<<endl;
    print(head);
}

int main()
{
    Node* node1=new Node(12);
    Node* head=node1;
    Node* tail=node1;
    print(head);

    insertAtHead(head,123);
    print(head);

    insertAtTail(tail,48);
    print(head);

    insertAtPosition(head, tail,3, 5);
    print(head);

    insertAtPosition(head,tail,4,43);
    print(head);

    reverse(head);
    print(head);


    return 0;
}