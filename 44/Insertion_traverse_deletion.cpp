#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //contructor
    Node(int data)
    {
        this ->data=data;
        this ->next=NULL;
    }

    //destructor
    ~Node(){
        int value =this->data;
        if(this->next !=NULL)
        {
            delete next;
            this->next=NULL;
        }
        cout<<"memory is free for node with data"<<value <<endl;
    }
};

void InsertAtHead(Node* &head, int d){

    //new node create
    Node* temp= new Node(d);
    temp ->next =head;
    head=temp;

}

void InsertAtTail(Node* &tail, int d){
    // new node create
    Node* temp=new Node(d); 
    tail ->next=temp;
    tail= tail->next;
}

void print(Node* &head ){
    Node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp ->data<<"  ";
        temp=temp->next;
    }
    cout<<endl;

}

void InsertAtPosition(Node* &tail,Node* &head,int position, int d)
{
    if(position ==1)
    {
        //insert at start
        InsertAtHead(head, d);
        return;
    }
    Node* temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    //inserting at Last position 
    if(temp ->next==NULL)
    {
        InsertAtTail(tail,d);
        return;
    }

    //creating a node for d
    Node*nodeToInsert=new Node(d);
    nodeToInsert -> next=temp ->next;
    temp->next=nodeToInsert;
}

void deleteNode(int position, Node* &head){
    //deleting first or start node
    if(position==1){
        Node* temp=head;
        head=head->next;
        //memory free start node
        temp->next=NULL;
        delete temp;
    }
    //deleting any middle node or lat node
    else{
        Node* curr=head;
        Node*prev=NULL;
        int cnt=1;
        while(cnt<position){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}

int main()
{
    //created a new node
    Node* node1= new Node(10);
    //head pointed to node1
    //print(head);
    Node* head=node1;
    Node*tail= node1;
    print(head);
    //InsertAtHead(head,12);
    InsertAtTail(tail,12);
    print(head);
    //InsertAtHead(head,15);
    InsertAtTail(tail,15);
    print(head);


    InsertAtPosition(tail,head,3,22);
    print(head);

    cout<<"head"<<head->data<<endl;
    cout<<"tail"<<tail->data<<endl;

    deleteNode(1,head);
    print(head);


    return 0;
}