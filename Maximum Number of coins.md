```cpp
class Solution{
    public:
        int n;
        int solve(vector<int> &a,vector<vector<int>> &dp,int l,int r) {
            if(l>r) return 0;
            if(l==r) {
                int ans=a[l];
                if(l-1>=0) ans*=a[l-1];
                if(r+1<n) ans*=a[r+1];
                return ans;
            }
            if(dp[l][r]!=-1) return dp[l][r];
            int best=0;
            for(int i=l;i<=r;i++) {
                int temp=a[i];
                if(l-1>=0) temp*=a[l-1];
                if(r+1<n) temp*=a[r+1];
                temp += solve(a,dp,l,i-1) + solve(a,dp,i+1,r);
                best=max(best,temp);
            }
            return dp[l][r]=best;
        }
        int maxCoins(int N, vector <int> &a)
        {
                // write your code here
                a.insert(a.begin(),1);
                a.push_back(1);
                n=N+2;
                vector<vector<int>> dp(n,vector<int>(n,-1));
                return solve(a,dp,1,n-2);
        }
};
```
