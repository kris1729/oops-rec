### Construct a BST from PreOrder Traversal <imp><LEET-CODE 1008 >

- 1. In preOrder first is Node the after all samall  is left after first big all come in right side <O(n^2)> 
- 2. take elment and make node after this small in left and greater is right ... First Creation Mathod <O(n^2)>


- 3. In  <O(n)>
- first difine Range for all the node <imp>>> when element lies in b/w range the create the node , if it's outside the range then return null
- at inilital the range will be [INT_MIN,INT_MAX] after this when we go left the lower range will same but higher range will be
  equal to the root->value, and when we go right directon then the range lower value will be equal to the root->value and higher value 
  will be same;

```
Node* BST(vector<int>&pre, in &index , int lower , int uppor){
    
    if(index == pre.size()|| pre[index]< lower || pre[index]> upper ) // behind the range
    return NULL;


    Node* root = new Node(pre[index++]);
    root->left = BST(pre , index , lower , root->data);
    root->right = BST(pre, index , root->data, upper);

    return root;
}

Node* bstFromPreorder(vector<int>pre){
    int index = 0;
    return BST(pre, index , INT_MIN , INT_MAX);

}


```

### Construct a BST from PostOrder Traversal GFG

- when postOrder then (LRN), now we will see from the last and last one is root, than all Greater value in the 
  right side and all small value in the left side.<O(n^2)>

-<Mathod-2> all node has  a range , take last and range [INT_MIN,INT_MAX] which is in b/w than construct root node
           than go right side than upper range will not change but lower range = root->data
           if go left side than lower range will not change but upper range = root->data
           for post order first we go in right side then go in left side.
    

    ```
    Node* solve(vector<int>&post, int&index, int lower , int upper){
      if(index<0 || post[index]< lower || post[index]>upper)
      return NULL;

      node* root = new Node(post[index--]);
      root->right = solve(post,index,root->data,upper);
      root->left = solve(post , index , lower , root->data);
      return root;
    }

    Node* BSTpost(vector<int>post){
              int index = post.size()-1;
              return solve(post,index,INT_MIN,INT_MAX);
    }
    
    ```

### PreOrder And BST  (if we can form BST from preOrder then return 1 else return 0 )





