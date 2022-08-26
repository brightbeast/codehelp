#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int d)
    {
        this->data=d;
        this->next=NULL;
    }
};

void insert(node* &head,int d)
{
    node* temp=new node(d);
    temp->next=head;
    head=temp;
}
void traversal(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main()
{
    node* head= new node(25);
    insert(head,24);
    insert(head,23);
    insert(head,22);
    insert(head,21);
    insert(head,19);
    insert(head,18);
    insert(head,17);
    insert(head,16);
    node* temp=head;
    head=head->next;
    free(temp);
    traversal(head);
    return 0;
}