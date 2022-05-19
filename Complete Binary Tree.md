[Complete Binary Tree](https://practice.geeksforgeeks.org/problems/complete-binary-tree/1/#)
```cpp
 bool isCompleteBT(Node* root){
        
        queue<Node*> q;
        q.push(root);
        bool f=false;
        while(!q.empty())
        {
            int n=q.size();
            
            while(n--)
            {
                Node* k=q.front();
                q.pop();
                if(k->left)
                {
                    q.push(k->left);
                    if(f) return false;
                }
                else f=true;
                if(k->right)
                {
                    q.push(k->right);
                    if(f) return false;
                }
                else f=true;
            }
        }
        return true;
    }
```
