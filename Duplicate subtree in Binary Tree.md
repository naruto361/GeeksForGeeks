```cpp
class Solution {
  public:
    /*This function returns true if the tree contains 
    a duplicate subtree of size 2 or more else returns false*/
    map<string,int> mp;
    string solve(Node* root) {
        if(!root) return "N";
        string temp;
        temp += to_string(root->data);
        if(!root->left && !root->right) {
            return temp;
        }
        temp+=',';
        temp+=solve(root->left);
        temp+=solve(root->right);
        mp[temp]++;
        return temp;
        
    }
    int dupSub(Node *root) {
         // code here
         solve(root);
         for(auto &i:mp) if(i.second>1) return true;
         return false;
         
    }
};
```
