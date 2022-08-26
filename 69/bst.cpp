#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    // constructor
    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *insertAtBST(Node *&root, int d)
{
    if (root == NULL)
    {
        root = new Node(d);
        return root;
    }

    if (d > root->data)
    {
        // data will be inserted in right of root
        root->right = insertAtBST(root->right, d);
    }

    else
        root->left = insertAtBST(root->left, d);

    return root;
}

void takeInput(Node *&root)
{
    int data;
    cin >> data;

    while (data != -1)
    {
        root = insertAtBST(root, data);
        cin >> data;
    }
}

Node *minVal(Node *root)
{
    Node *temp = root;
    while (temp->left != NULL)
        temp = temp->left;
    return temp;
}

Node* deleteBST(Node *&root, int val)
{
    // base case
    if (root == NULL)
        return root;

    if (root->data == val)
    {
        // 0 child
        if (root->right == NULL && root->left == NULL)
        {
            delete root;
            return NULL;
        }
        // 1 child

        // left child
        if (root->left != NULL && root->right == NULL)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }
        // right child
        if (root->left == NULL && root->right != NULL)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }
        // 2 child
        if (root->right != NULL && root->left != NULL)
        {
            int mini = minVal(root->right)->data;
            root->data = mini;
            root->right = deleteBST(root->right, mini);
            return root;
        }
    }

    else if(root->data>val)
    {
        //left part mein jao
        root->left=deleteBST(root->left, val);
        return root;
    }

    else
    {
        //right part mein jao
        root->right= deleteBST(root->right, val);
        return root;
    }
    
}

void traversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;

            if (!q.empty())
                q.push(NULL);
        }

        else
        {
            cout << temp->data << " ";
            if (temp->left)
                q.push(temp->left);

            if (temp->right)
                q.push(temp->right);
        }
    }
}

void Preorder(Node *root)
{
    if (root == NULL)
        return;

    cout << root->data << " ";
    Preorder(root->left);
    Preorder(root->right);
}

void Postorder(Node *root)
{
    if (root == NULL)
        return;

    Postorder(root->left);
    Postorder(root->right);
    cout << root->data << " ";
}

void Inorder(Node* root)
{
    if(root==NULL)
    return;

    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
}

int main()
{
    Node *root = NULL;
    cout << "Enter number" << endl;
    takeInput(root);
    cout << endl<< "The BST is " << endl;
    traversal(root);

    cout <<endl<< "Preorder" << endl;
    Preorder(root);

    cout <<endl<< "Post order" << endl;
    Postorder(root);
    
    cout<<endl<<"Inorder"<<endl;
    Inorder(root);

    deleteBST(root, 30);
    cout<<endl<<endl<<"After deletion"<<endl;
    cout << endl<< "The BST is " << endl;
    traversal(root);

    cout <<endl<< "Preorder" << endl;
    Preorder(root);

    cout <<endl<< "Post order" << endl;
    Postorder(root);

    cout<<endl<<"Inorder"<<endl;
    Inorder(root);
    return 0;
}