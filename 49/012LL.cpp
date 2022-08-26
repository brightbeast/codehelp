#include <iostream>

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
    Node* newnode= new Node(d);
    newnode->next=head;
    head=newnode;
}

void insertAtTail(Node* &tail, int d)
{
    Node* newnode= new Node(d);
    tail->next=newnode;
    tail=newnode;
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
    
    if(temp->next==NULL)
    {
        insertAtTail(tail,d);
        return;
    }
    
    Node* newnode1= new Node(d);
    newnode1->next=temp->next;
    temp->next=newnode1;
}

void sort(Node* &head)
{
    int count0=0 ,count1=0 ,count2=0;
    Node* temp=head;

    while(temp!=NULL)
    {
        if(temp->data==0)
        {
            count0++;
            temp=temp->next;
            continue;
        }

        if(temp->data==1)
        {
            count1++;
            temp=temp->next;
            continue;
        }

        if(temp->data==2)
        {
            count2++;
            temp=temp->next;
            continue;
        }
    }
    cout<<count0<<endl;
    cout<<count1<<endl;
    cout<<count2<<endl;

    Node* temp=head;
    /*
    for(int i=1; i<=count0; i++)
    {
        start->data=0;
        start=start->next;
    }
    for(int i=count0+1; i<=count1+count2; i++)
    {
        start->data=1;
        start=start->next;
    }
    for(int i=count2+count1+1; i<=count2; i++)
    { 
        start->data=2;
        start=start->next;
    }
    */
   while(head!=NULL)
   {
       while(count0!=0)
       {
           temp->data=0;
           count--;
       }
   }
}

int main()
{
  Node* newnode1=new Node(1);
  Node* head=newnode1;
  Node* tail=newnode1;
// print(head);
  
  insertAtHead(head, 2);
//   print(head);
  
  insertAtTail(tail, 0);
//   print(head);
  
  insertAtPosition(head, tail, 1, 1);
//   print(head);
  
  insertAtPosition(head,tail,5, 1);
//   print(head);
  
  insertAtPosition(head,tail,5,0);
  
  insertAtPosition(head, tail, 4,0);
  print(head);

  sort(head);
  cout<<"Sorted Linked list "<<endl;
  print(head);
  
  
  

    return 0;
}