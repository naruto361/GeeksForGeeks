[Farthest Number](https://practice.geeksforgeeks.org/problems/1a31d09f7b8e9c0633339df07858deb3a728fe19/1)
```cpp
class Solution{   
  public:
    vector<int> farNumber(int N,vector<int> Arr){
        vector<int> dp(N);
        dp[N-1]=Arr[N-1];
        for(int i=N-2;i>=0;i--)
        {
            dp[i]=min(dp[i+1],Arr[i]);
        }
        //reverse(dp.begin(),dp.end());
        vector<int> ans(N,-1);
        for(int i=0;i<N;i++)
        {
            auto it=lower_bound(dp.begin()+i+1,dp.end(),Arr[i]);
            --it;
            if(*it<Arr[i]) ans[i]=it-dp.begin();
        }
        return ans;
    }
};
```
