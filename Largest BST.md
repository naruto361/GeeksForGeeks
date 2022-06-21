```cpp
class Solution{
    public:
    // Return the size of the largest sub-tree which is also a BST
    int largestBst(Node *root)
    {
    	if(!root) return 0;
    	if(isBST(root,INT_MAX,INT_MIN)) 
    	    return findSize(root);
    	return  max(largestBst(root->left),largestBst(root->right));
    }
    bool isBST(Node* root,int maxi,int mini)
    {
        if(!root) return true;
        if(root->data>=maxi || root->data<=mini) 
            return false;
        return isBST(root->left,root->data,mini) && isBST(root->right,maxi,root->data);
    }
    int findSize(Node* root)
    {
        if(!root) return 0;
        int l=findSize(root->left);
        int r=findSize(root->right);
        return l+r+1;
        // Note: Here Size is equal to the number of nodes in the subtree
    }
};
```
