
#include<bits/stdc++.h>
using namespace std;
struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right ;

    TreeNode(int data){
       val = data;
       left = NULL;
       right = NULL;
    }
};


// main code

class Solution {
public:
   void inOrderTrav(vector<int>& ans, TreeNode* node) {
        if (node == NULL)
            return;
        inOrderTrav(ans, node->left);
        ans.push_back(node->val);
        inOrderTrav(ans, node->right);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        inOrderTrav(ans, root);
        return ans;
    }
};