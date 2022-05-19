[Single valued subtree](https://practice.geeksforgeeks.org/problems/single-valued-subtree/1/#)
```cpp
class Solution
{
    public:
    int ans=0;
    bool solve(Node* root)
    {
        if(!root) return true;
        bool l=solve(root->left);
        bool r=solve(root->right);
        if(root->left && root->data != root->left->data)
            return false;
        if(root->right && root->data != root->right->data)
        return false;
        if(l&&r) ++ans;
        return (l&&r);
    }
    int singlevalued(Node *root)
    {
        solve(root);
        return ans;
    }
    
};
```
```cpp
/* ************** This one gives TLE **************** */
class Solution
{
    public:
    int ans=0;
    set<int> solve(Node* root)
    {
        if(!root) return {};
        set<int> st1=solve(root->left);
        set<int> st2=solve(root->right);
        for(auto &i:st2) st1.insert(i);
        st1.insert(root->data);
        if(st1.size()==1) ++ans;
        return st1;
    }
    int singlevalued(Node *root)
    {
        solve(root);
        return ans;
    }
    
};
```
