## [Corona Vaccine](https://practice.geeksforgeeks.org/problems/d1afdbd3d49e4e7e6f9d738606cd592f63e6b0f0/1#)
```
class Solution{
public:
// val==0 , already has vaccine
// val==-1 , needs vaccine
// val==1 , any of its child has vaccine
    int ans=0;
    int solve(Node* root)
    {
        if(!root) return 1;
        int l = solve(root->left);
        int r = solve(root->right);
        if(l==-1 || r==-1)
        {
            ans++;
            return 0;
        }
        if(l==0 || r==0) return 1;
        return -1;
    }
    int supplyVaccine(Node* root){
        // Your code goes here
        if(solve(root)==-1) ans++;
        return ans;
    }
};
```
