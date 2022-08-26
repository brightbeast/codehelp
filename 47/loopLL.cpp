#include<iostream>
#include<map>
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

void print(Node* &head)
{
    Node*temp= head;
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
    Node* temp= new Node(d);
    tail->next=temp;
    tail=tail->next;
}

void insertAtPosition(Node* &head, Node* &tail,int position, int d)
{
    if(position==1)
    {
        insertAtHead(head,d);
        return ;
    }

    Node* temp=head;
    for(int i=1; i<position-1; i++)
    {
        temp=temp->next;
    }
    
    if(temp->next ==NULL)
    {
        insertAtTail(tail,d);
        return;
    }

    Node* insertat=new Node(d);
    insertat->next=temp->next;
    temp->next=insertat;
}

bool loops(Node* &head)
{
    if(head==NULL)
    return false;

    map<Node*, bool> visited;

    Node* temp=head;
    while(temp != NULL)
    {
        if(visited[temp]== true)
        {
            return true;
        }
        visited[temp]=true;
        temp=temp->next;
        // cout<<temp->data<<endl;
    }
    return false;
}

int main()
{
    Node* newnode= new Node(1);
    Node* head=newnode;
    Node* tail=newnode;
    print(head);

    insertAtHead(head,0);
    print(head);
    
    insertAtTail(tail,2);
    print(head);
    
    insertAtPosition(head, tail,1, -1);
    print(head);
    
    insertAtPosition(head, tail,5, 4);
    print(head);
    
    insertAtPosition(head, tail,5,3);
    print(head);

    insertAtPosition(head, tail,7,9);
    print(head);

    cout<<head->data<<" "<<tail->data<<endl;
    

    tail->next=head;

    // bool checkloop=loops(head);
    if(loops(head))
    cout<<"Cyclic loop"<<endl;

    else
    cout<<"Not a cyclic loop"<<endl;


    return 0;
}