#include <bits/stdc++.h>
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

void print(Node*root){
    if(!root)return;
    cout<<root->data<<" ";
    print(root->left);
    print(root->left);
}

Node* make_tree(vector<int>&nums , int i){
   
    int x = nums[i];
    if (x == -1)
        return NULL;
    Node *temp = new Node(x);
    temp->left = make_tree(nums,i+1);
    temp->right = make_tree(nums,i+1);
    return temp;
}
int main(){
    
    vector<int>nums={1,2,4,-1,-1,5,-1,-1,3,6,-1,-1,7,-1,-1};
    Node* root = make_tree(nums,0);
    print(root);

}
