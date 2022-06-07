```cpp
	int MinimumWalk(vector<vector<int>>&graph, int U, int V, int k){
	    int n=graph.size();
	    int mod=1e9+7;
	    //int dp[n][k+1]={0};
	    vector<vector<int>> dp(n,vector<int> (k+1,0));
	    dp[U][0]=1;
	    for(int edges=0;edges<k;edges++)
	    {
	        for(int u=0;u<n;u++)
	        {
	            if(dp[u][edges]>0)
	            for(int v=0;v<n;v++)
	            {
	                if(graph[u][v]==1)
	                {
	                    dp[v][edges+1] =(dp[v][edges+1]%mod + dp[u][edges]%mod )%mod;
	                }
	            }
	        }
	    }
	    return dp[V][k];
	}
```
