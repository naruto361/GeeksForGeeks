```cpp
class Solution{

public:
    int ans=-1;
    int floor(Node* root, int x) {
        // Code here
        if(!root) return -1;
        if(root->data>x) floor(root->left,x);
        else if(root->data < x) {
            ans=max(ans,root->data);
            floor(root->right,x);
        }
        else return ans=root->data;
        return ans;
        
    }
};
```
