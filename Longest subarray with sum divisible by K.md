[Longest subarray with sum divisible by K](https://practice.geeksforgeeks.org/problems/longest-subarray-with-sum-divisible-by-k1259/1#)
```cpp
class Solution{
public:	
	int longSubarrWthSumDivByK(int arr[], int n, int k)
	{
	    // Complete the function
	    for(int i=1;i<n;i++) arr[i]+=arr[i-1];
	    for(int i=0;i<n;i++) {arr[i]=(arr[i]+1LL*abs(arr[i])*k)%k;}//index does not become negative
	    vector<pair<int,int>> v(k,{n+1,-1});
	    v[0]={-1,-1};
	    for(int i=0;i<n;i++)
	    {
	        if(v[arr[i]].first==n+1) v[arr[i]].first=i;
	        v[arr[i]].second=i;
	    }
	    int ans=0;
	    for(int i=0;i<k;i++)
	    {
	        if(v[i].first!=n+1)
	        {
	            ans=max(ans,v[i].second-v[i].first);
	        }
	    }
	    return ans;
	}
};
```
