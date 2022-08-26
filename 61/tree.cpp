#include<iostream>
#include<queue>
using namespace std;

class node
{
    public:
    int data;
    node* left;
    node* right;

    //constructor 
    node(int d)
    {
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};

node* buildtree(node* root)
{
    int data;
    cin>>data;

    if(data==-1)
    return NULL;

    root=new node(data);
    //cout<<"Enter data for entering left of "<<data<<endl;
    root->left=buildtree(root->left);
    
    //cout<<"Enter data for entering right of "<<data<<endl;
    root->right=buildtree(root->right);
    return root;
}

void levelorder(node* root)
{
    queue<node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        node* temp=q.front();
        //cout<<temp->data<<" ";
        q.pop();
        if(temp==NULL)
        {
            cout<<endl;

            if(!q.empty())
            q.push(NULL);
        }

        else
        {
            cout<<temp->data<<" ";
            if(temp->left)
            q.push(temp->left);

            if(temp->right)
            q.push(temp->right);
        }
    }
    
}

void inorder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void postorder(node* root)
{
    if(root==NULL)
    return;

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";

}

void preorder(node* root)
{
    if(root==NULL)
    return;

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right); 

}

int main()
{
    cout<<"Enter element for node"<<endl;
    node* root=NULL;
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    root=buildtree(root);
    levelorder(root);
    cout<<endl<<"inorder"<<endl;
    inorder(root);
    cout<<endl<<"preorder"<<endl;
    preorder(root);
    cout<<endl<<"postorder"<<endl;
    postorder(root);
    return 0;
}