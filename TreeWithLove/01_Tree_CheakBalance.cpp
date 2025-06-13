// leetCode (110)
/*

int height(TreeNode*node){
    int ans = 1 + max(height(node->left && node->right));
    return ans;
}

bool isBalance(*root){

if(root==NULL)return true;

int leftHeight = height(root->left);
int rightHight = height(root->right);
int diff = abs(leftHeight - rightHeight);
bool cheakLeft = isBalance(root->left);
bool cheakRight = isBalance(root->right);
if((diff<=1)&&cheakLeft && cheakRight)return true;
else return false;


}



*/














