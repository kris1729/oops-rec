
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
    void preOrderTrav(vector<int>& ans, TreeNode* root) {
        if (root == NULL)
            return;
        ans.push_back(root->val);
        preOrderTrav(ans, root->left);
        preOrderTrav(ans, root->right);
    }
    vector<int> preorderTraversal(TreeNode* root) {

        vector<int> ans;
        preOrderTrav(ans, root);
        return ans;
    }
};