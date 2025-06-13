#include <iostream>
using namespace std;
#include<vector>
#include<queue>

class Node
{
public:
    int data;
    Node *left, *right;

    Node(int value)
    {
        data = value;
        left = NULL;
        right = NULL;
    }
};

vector<int>  Left_view(Node*root){
    if(!root)return {};
    vector<int>ans;

    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        int n = q.size();
        ans.push_back(q.front()->data);
        while(n--){
            Node *temp = q.front();
            q.pop();
            if(temp->left)q.push(temp->left);
            if(temp->right)q.push(temp->right);
        }
    }
    return ans;

}





Node *binaryTree()
{
    int x;
    cin >> x;
    if (x == -1)
        return NULL;
    Node *temp = new Node(x);
    cout << "Enter the Left child of: " <<x<<" ";
    temp->left = binaryTree();
    cout<<"Enter the Right child of: "<<x<<" ";
    temp->right = binaryTree();
    return temp;
}

int main()
{
    cout<<"Enter the root node ";
    Node *root ;
    root = binaryTree();

    vector<int>ans1 = Left_view(root);

    for(int  i =0;i<ans1.size();i++)cout<<ans1[i]<<' ';


}