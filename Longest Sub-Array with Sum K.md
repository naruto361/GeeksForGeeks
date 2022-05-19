[Longest Sub-Array with Sum K ](https://practice.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1)
```cpp
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        unordered_map<int,int> mp;
        int sum=0;
        int ans=0;
        mp[0]=-1;
        for(int i=0;i<N;i++)
        {
            sum+=A[i];
            if(mp.find(sum-K)!=mp.end())
            {
                ans=max(ans,i-mp[sum-K]);
            }
            if(mp.find(sum)==mp.end())
            mp[sum]=i;
        }
        return ans;
    } 

};
```
