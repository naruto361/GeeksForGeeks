```cpp
class Solution {
  public:
    long long noOfWays(int M , int N , int X) {
        //long long dp[N+1][X+1]={0};
        vector<vector<long long>> dp(N+1,vector<long long> (X+1,0));
        dp[0][0]=1;
        for(int i=1;i<=N;i++)
        {
            for(int j=1;j<=X;j++)
            {
                for(int x=1;x<=M;x++)
                {
                    if(j>=x)
                    dp[i][j] += dp[i-1][j-x];
                }
            }
        }
        return dp[N][X];
    }
};
```
