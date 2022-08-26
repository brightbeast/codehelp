#include<iostream>
//#include<queue>
using namespace std;

//structure tree
struct node
{
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

//creation of binary tree
node* CreateTree(node* root)
{
    
    int d;
    cin>>d;
    root=new node(d);
    if(d==-1)
    return NULL;

    cout<<"Enter the value to the left of "<<root->data<<endl;
    root->left=CreateTree(root->left);

    cout<<"Enter the value to right of "<<root->data<<endl;
    root->right=CreateTree(root->right);

    return root;
}
/*
void PrintTree(node* root)
{
    queue<node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        node* temp=q.front();
        q.pop();
        if(temp==NULL)
        {
            cout<<endl;
            
            if(!q.empty())
            q.push(NULL);
        }

        else
        {
            cout<<temp->data;
            if(temp->left)
            q.push(temp->left);
            if(temp->right)
            q.push(temp->right);
        }
    }
}
*/

int height(node* root)
{
    if(root==NULL)
    return 0;

    int Left=height(root->left);
    int Right=height(root->right);
    int ans=max(Right,Left)+1;

    return ans;
}

int Diameter(node* root)
{//1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    if(root==NULL)
    return 0;

    int Left=Diameter(root->left);
    int Right=Diameter(root->right);
    int Height=height(root->left)+height(root->right)+1;
    int ans=max(Left,max(Right,Height));

    return ans;
}

int main()
{
    node* root=NULL;
    cout<<"Enter the number in tree"<<endl;
    root=CreateTree(root);
    
    int ans=Diameter(root);
    cout<<"The maximum diameter of the tree is "<<ans<<endl;
    return 0;
}