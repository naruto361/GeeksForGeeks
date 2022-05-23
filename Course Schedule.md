```
Topological Sort
DFS + STACK
```

```cpp
class Solution
{
  private:
  bool cycle_helper(int i,vector<vector<int>> &adj,vector<int> &dp)
  {
      if(dp[i]==2) return true;
      dp[i]=2;
      for(auto &v:adj[i])
      {
          if(dp[v]!=1)
          {
              if(cycle_helper(v,adj,dp)) return true;
          }
      }
      dp[i]=1;
      return false;
  }
    bool cycle(int n,vector<vector<int>> &adj)
    {
        vector<int> dp(n,0);
        for(int i=0;i<n;i++)
        {
            if(dp[i]==0) 
            {
                if(cycle_helper(i,adj,dp)) return true;
            }
        }
        return false;
    }
    void dfs(int i,vector<vector<int>> &adj,vector<bool> &vis,stack<int> &st)
    {
        vis[i]=true;
        for(auto &v:adj[i])
        {
            if(!vis[v])
            {
                dfs(v,adj,vis,st);
            }
        }
        st.push(i);
    }
  public:
    vector<int> findOrder(int n, int m, vector<vector<int>> prerequisites) 
    {
        vector<vector<int>> adj(n);
        for(auto &i:prerequisites)
        {
            adj[i[0]].push_back(i[1]);
        }
        // cycle detection
        if(cycle(n,adj)) return {};
        vector<bool> vis(n,false);
        stack<int> st;
        for(int i=0;i<n;i++)
        {
            if(vis[i]==0)
            {
                dfs(i,adj,vis,st);
            }
        }
        vector<int> res;
        while(!st.empty())
        {
            res.push_back(st.top());st.pop();
        }
        reverse(res.begin(),res.end());
        //for(auto &i:res) cout<<i<<' ';
        return res;
    }
};
```
