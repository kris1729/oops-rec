- problem of BST
### Check BST
<imp> If Logic is that, we chack for all element left one is small and right one is large to root element then
     it is worngs..

- consept (<find inOrder of Tree if its is strictly increasing  sorted array then its BST>)

# Mathod First..
- make a vector to store the inorder of the BST after this , cheak it's strictily increasing

```
void inorder(Node *root, vector<int> &v)
{
    if (!root)
        return;
    inorder(root->left, v);
    v.push_back(root->data);
    inorder(root->right, v);
}
bool Check(Node *root)
{
    vector<int> v;
    inorder(root, v);
    for (int i = 1; i < v.size(); i++)
        if (v[i] <= v[i - 1])
            return 0;
    return 0;
}

```
# Mathod Second
- not use new arry use a prev variable for compair the cur element . <space complexity O(n)>


```
bool BST(Node *root, int &prev)
{
    if (!root)
        return 1;

    if (!BST(root->left, prev))
        return 0;

    if (root->data <= prev)
        return 0;

    prev = root->right;

    return BST(root->right, prev);
}

bool Check_BST(Node *root)
{
    int prev = INT_MIN;
    return BST(root, prev);
}

```


### Min Distance between BST Nodes..LEET_CODE(783)

-<approch>  take inOrder traversal and then find the min differce b/w (conjcative elements)
for reduce the space complexity take a prev vareble and minimize ans to the next upcoming elments 

# sudo
  prev = INT_MIN
  ans = INT_MAX
  make and minmize and update prev one by one 
<note> In BST remember <INORDER> concept

```


void solve(Node *root, int &ans, int &prev)
{
    if (!root)
    {
        return;
    }
    solve(root->left, prev, ans);

    // ans = min(ans , (root->data - prev));

    if (prev != INT_MIN)
        ans = min(ans, (root->dat - prev));

    prev = root->data;
    solve(root->right, prev, ans);
}

int minDiff(Node* root){
    int ans = INT_MAX;
   int prev = INT_MIN;

    solve(root, and , prev);
    return ans;
}

```
<note> can be problem for int overFlow (data-INT_MIN)



### Find First Kth Smallest element SUM <GFG>
 <approch>
 - take the inOrder Trevarsal of BST an add first K element and return it;
 <approch 2>
 - take sum = 0, k ant first solve left add and k-- while k==0

 <Time> Worst case <O(n)>

 ```
void Solve(Node *root, int &sum, int &k)
{
    if (!root)
        return;

    Solve(root->left, sum, k);
    k--;

    if(k>=0)
    sum += root->data;

    if (k <= 0)
        return;
    Solve(root->right, sum, k);
}

int kSum(Node *root, int k)
{
    int sum = 0;
    Solve(root, sum, k);
    return sum;
}


 ```

### Find Kth Largest element  of BST <GFG>

<approch> Take inOrder Trevarsal of the BST and take last kth Element .
<approch> for reduce the space  complexity (right , node , left)
<time> in Worst case time complixty will br <O(n)>

```
void Solve(Node* root , int& ans, int &k){

    if(!root)return;

    Solve(root->right, ans, k);
    k--;
    if(k==0)
    ans =root->data;
    if(k<=0)
    return;
    solve(root->left, ans, k);


}

int kLargest(Node* root , int k){
    int ans =0;
    Solve(root, ans ,k);
    return ans;
}

```

### Convert a  Sorted array  into BST which height is Balenced..give the lexiography smallest preorder of BST
- arr = {1,2,3,4,5,6,7,8,9,10};
- when we convert in into a balance BST the take mid (first(5)) and make node and all left {1,2,3,4} all left and
{6,7,8,9,10} all right with same logic.
when we take pre order then order will be the continious coming mids will be the ans{5,2,1,3,4,8,6,7,9,10}

```
void Solve(vector<int>&arr, vector<int>&ans, int start ,int end){
    if(start>end)return;
    int mid = start + (end-start)/2;
    ans.push_back(arr[mid]);
    solve(arr, ans , start , mid-1);
    Solve(arr, and , mid+1, end);

}


vector<int> ConvertBST(vector<int>arr){
    int start = 0;
    int end =arr.size()-1;
    vector<int>ans;
    Solve(arr, ans , start , end);
    return ans;
}

```
