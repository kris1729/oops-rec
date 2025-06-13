#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left, *right;
    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};
// pre order traversal
void PreOrder(Node *root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    PreOrder(root->left);
    PreOrder(root->right);
}
// void inorder
void InOrder(Node *root)
{
    if (root == NULL)
        return;
    InOrder(root->left);
    cout << root->data << " ";
    InOrder(root->right);
}

// post order
void PostOrder(Node *root)
{
    if (root == NULL)
        return;
    PostOrder(root->left);
    PostOrder(root->right);
    cout << root->data << " ";
}
// level order traversal
void levelTrav(Node *root){
    if(root==NULL)return;
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        Node *temp = q.front();
        q.pop();
        cout<<temp->data<<" ";
        if(temp->left) q.push(temp->left);
        if(temp->right)q.push(temp->right);
        
    }
}

// create binary tree preorder
Node *binaryTree()
{
    int x;
    cin >> x;
    if (x == -1)
        return NULL;
    Node *temp = new Node(x);
    cout << "Enter the Left child of: " << x << " ";
    temp->left = binaryTree();
    cout << "Enter the Right child of: " << x << " ";
    temp->right = binaryTree();
    return temp;
}
// create binary tree using level order

Node *levelCreation()
{
    int x;
    cin >> x;
    if (x == -1)
        return NULL;
    Node *root = new Node(x);
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        cout << "Enter the left child of: " << temp->data << " ";
        int l;
        cin >> l;
        if (l != -1)
        {
            temp->left = new Node(l);
            q.push(temp->left);
        }
        cout << "Enter the right Child of: " << temp->data << " ";
        int r;
        cin >> r;
        if (r != -1)
        {
            temp->right = new Node(r);
            q.push(temp->right);
        }
    }
    return root;
}

int main()
{
    cout << "Enter the value of the root: ";
    // Node *root = binaryTree();
    Node *root = levelCreation();

    PreOrder(root);
    cout << endl;
    InOrder(root);
    cout << endl;
    PostOrder(root);
    cout << endl;
    levelTrav(root);
}