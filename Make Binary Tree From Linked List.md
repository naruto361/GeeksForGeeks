[Make Binary Tree From Linked List](https://practice.geeksforgeeks.org/problems/make-binary-tree/1)
```cpp
void convert(Node *head, TreeNode *&root) {
    Node* temp=head;
    vector<TreeNode*> tree;
    TreeNode* t=new TreeNode(temp->data);
    tree.push_back(t);
    temp=temp->next;
    while(temp)
    {
        int n=tree.size();
            TreeNode* t=new TreeNode(temp->data);
            tree.push_back(t);
            if(n%2)
            {
                tree[(n-1)/2]->left=t;
            }
            else tree[(n-1)/2]->right=t;
        temp=temp->next;
    }
    root=tree[0];
}
```
