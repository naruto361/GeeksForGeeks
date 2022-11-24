```cpp
class Solution{
	public:
	int LongestBitonicSequence(vector<int>nums)
	{
	    // code here
	    int n=nums.size();
	    vector<int> left(n,1) , right(n,1);
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<i;j++)
	        {
	            if(nums[i]>nums[j])
	                left[i]=max(left[i],1+left[j]);
	        }
	    }
	    for(int i=n-1;i>=0;i--)
	    {
	        for(int j=n-1;j>i;j--)
	        {
	            if(nums[i]>nums[j])
	                right[i]=max(right[i],1+right[j]);
	        }
	    }
	    int ans=0;
	    for(int i=0;i<n;i++) ans=max(ans,left[i]+right[i]);
	    return ans-1;
	}
};
```
