
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
   void postOrderTrav(TreeNode* root , vector<int>&ans){
      if(root == NULL)return;
      postOrderTrav(root->left ,ans);
      postOrderTrav(root->right,ans);
      ans.push_back(root->val);

  }

    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        postOrderTrav(root, ans);
        return ans;
        
    }
};