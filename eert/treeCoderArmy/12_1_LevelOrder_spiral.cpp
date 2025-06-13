#include <iostream>
#include <queue>
#include <stack>
using namespace std;

class Node
{
public:
    int data;
    Node *left, *right;

    Node(int value)
    {
        data = value;
        left = right = NULL;
    }
};

void levelOrderSpiral(Node *root)
{

    stack<Node *> s1; // right to left
    stack<Node *> s2; // left to right
    s1.push(root);

    while (!s1.empty() || !s2.empty())
    {

        // right to left
        if (!s1.empty())
        {
            while (!s1.empty())
            {
                Node *temp = s1.top();
                s1.pop();
                cout<<temp->data<<" ";
                if (temp->right)
                    s2.push(temp->right);
                if (temp->left)
                    s2.push(temp->left);
            }
        } 
        // left to right
       // if (!s2.empty())
       else 
        {
            while (!s2.empty())
            {
                Node *temp = s2.top();
                s2.pop();
                cout<<temp->data<<" ";
                if (temp->left)
                    s1.push(temp->left);
                if (temp->right)
                    s1.push(temp->right);
            }
        }
    }
    return;
    
}

// main function for create tree

int main()
{
    int x;
    cout << "enter root : ";
    cin >> x;
    int first, second;
    queue<Node *> q;
    Node *root = new Node(x);

    q.push(root);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        cout << "enter the left child of " << temp->data << " : ";
        cin >> first;

        if (first != -1)
        {
            temp->left = new Node(first);
            q.push(temp->left);
        }
        cout << "enter the right child of " << temp->data << " : ";
        cin >> second;
        if (second != -1)
        {
            temp->right = new Node(second);
            q.push(temp->right);
        }
    }

    levelOrderSpiral(root);
}


// https://www.geeksforgeeks.org/problems/level-order-traversal-in-spiral-form/1