#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;
    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node *buildtree(node *root)
{
    int d;
    cin >> d;
    root = new node(d);

    if (d == -1)
        return NULL;

    // cout<<"Enter the element left of "<<d;
    root->left = buildtree(root->left);

    // cout<<"Enter the element right of "<<d;
    root->right = buildtree(root->right);
    return root;
}

void LevelOrderTraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node *temp = q.front();
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

void inorder(node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
// 1 2 4 -1 -1 5 -1 -1 3 6 -1 8 -1 -1 7 -1 9 -1 -1
int main()
{
    node *root = NULL;
    root = buildtree(root);
    LevelOrderTraversal(root);
    cout << endl;
    inorder(root);

    return 0;
}