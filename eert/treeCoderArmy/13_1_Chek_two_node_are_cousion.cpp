#include<iostream>
#include<queue>
using namespace std;


class Node{
    public:
    int data;
    Node *left,*right;

Node(int value){
   data = value;
   left = right = NULL;
}
};
// a aur b ke same parent hai
bool isParent(Node* root , int a , int b){
    if(root==NULL)return 0;
    if(root->left && root->right){
        if(root->left->data ==a && root->right->data==b)return 1;
        if(root->left->data ==b && root->right->data == a)return 1;
    }
    return isParent(root->left,a,b)|| isParent(root->right,a,b);
}

bool cheakCousion(Node* root , int a ,int b){
    queue<Node*>q;
    q.push(root);
    // let the level of a is lev1
    int lev1 = -1;
    // let the level of b is lev2;
    int lev2 = -1;
    // let the level of the tree is level 
    int level =0;

    while(!q.empty()){
        int n = q.size(); // n is no of element at a level
        while(n--){
            Node* temp = q.front();
            q.pop();
            if(temp->data == a )lev1 =level;// a mil gya
            if(temp->data == b)lev2 = level; // b mil gya
            // basic traversing approch
            if(temp->left)q.push(temp->left);
            if(temp->right)q.push(temp->right);
        }
        level++;
        // a ya b mila hai sirf
        if(lev1 != lev2) return 0;
        // dono mil gye hai 
        if(lev1!=-1&& lev2!=-1)break;

    }
    if(lev1==-1&& lev2==-1)return 0;
    return !isParent(root, a,b);
}





























int main(){
int x;
cout<<"enter root : ";
cin>>x;
 int first , second;
queue<Node*>q;
Node *root = new Node(x);

q.push(root);
while(!q.empty()){
    Node *temp = q.front();
    q.pop(); 
    cout<<"enter the left child of "<<temp->data<<" : ";
    cin>>first;
    
    if(first!=-1){temp->left = new Node (first);
    q.push(temp->left);

    }
     cout<<"enter the right child of "<<temp->data<<" : ";
    cin>>second;
    if(second!=-1){
        temp->right = new Node(second);
        q.push(temp->right);
    }

}

// cheak cousion
int a = 6,b=4;
if(cheakCousion(root,a,b))cout<<"YES";
else cout<<"NO";

}