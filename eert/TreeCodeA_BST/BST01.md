- In Binary tree all element is arrange in random order.

## Binary Search Tree
- In binary search tree element are arreged in a Particular order like 
  in left all small and in right all greater value verse varsa
  Like sorted Array.
- if element is equal and put all equal element in left or in right.

## Convert a array in a BST 
```


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

Node *insert(Node *root, int data)
{
    if (!root)
    {
        Node *temp = new Node(data);
        return temp;
    }
    if (root->data > data)
    {
        root->left = insert(root->left, data);
    }
    else
    {
        root->right = insert(root->right, data);
    }
    return root;
}

int main()
{
    int arr[] = {3, 7, 4, 6, 8, 4, 5, 6, 9, 22, 1};
    Node *root = NULL;

    for (int i = 0; i < 11; i++)
    {
        root = insert(root, arr[i]);
    }
}
  


```

### Time Complexity And Space Complexity

## insertion 
- all New element are add as a leaf Node , Means in Worst case , Height of the tree  <O(h)>.
# NOTE
  not log(n) Means in worst case Time Complexity is <O(n)> .... tree in liner from , BTS of sorted array.
- Space Complexity Will be Max size of Stack During Rucrsion calling is <O(n)> in worst case.
# Note
- if you find inorder traversal then its gives <Sorted> order array.

## Searching 
```
bool Search(Node *root, int target)
{
    if (!root)
        return false;
    if (root->data == target)
        return true;

    if (root->data > target)
        return Search(root->left, target);
    else
        return Search(root->right, target);
}

```
# time Complexity 
- time <o(h)> in worst case ----> <O(n)> and space cimplexity will be <O(n)>


### Delete Operation in BTS unique Elements.

- very easy to delete the leaf node , delete node and return <NULL>
- if One child present,   delete node and return address of his <child(left/right)>

- problem which has left and right both child present.
<imp> we have two probibality to put element as root from Left or From Right
<1>if take element from root's left, then its should be <Greatest from all left> ... which one is <in root left side  .. Most right ONE>
<2>if take element from root's right, then it should be <Smallest from all right>... which one is <in root right side .. Most left ONE>
- in both case During sellecting most left or most Right 
- most right's element can has left child , then point it to the most right parents.
- most left's element can has right child , then point it to the most left parents.

<imp>can be problem when (left most/ right most) and node(will be delete) are same parent child.
- then simply delete the node and left and right child link each other and return the add. of (leftmost or right most)
if(root==parent){
    child->right = root->right;
    delete root;
    return child;
}

# Implimentation.

```
Node *deleteNode(Node *root, int target)
{
    if (!root)
        return NULL;
    if (root->data > target)
    {
        root->left = deleteNode(root->left, target);
        return root;
    }
    else if (root->data < target)
    {
        root->right = deleteNode(root->right, target);
        return root;
    }
    else
    {
        // leaf element 
        if (!root->left && !root->right)
        {
            delete root;
            return NULL;
        }
        else if (!root->left)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }
        else if (!root->right)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }
        // 2 child  exixt
        else
        {
            // find greatest element from left
            Node *child = root->left;
            Node *parent = root;
            while (child->right)
            {
                parent = child;
                child = child->right;
            }
            if (root != parent)
            {
                parent->right = child->left;
                child->left = root->left;
                child->right = root->right;
                delete root;
                return child;
            }
            else
            {
                child->right = root->right;
                delete root;
                return child;
            }
        }
    }
}


```
# time complexity for delete node
<o(n)>worst case

# Note
- now in worst case the time complexity of BT and BST is same.
- but In Average case when BST not grow in one side then its win to the BT..
- the problem solve one side grow in BST by the concept of the AVL tree.







