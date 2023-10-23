```cpp
	int maxSumIS(int arr[], int n)  
	{  
	    vector<int> dp(n);
	    for(int i=0;i<n;i++) dp[i]=arr[i];
	    int maxi=arr[0];
	    for(int i=1;i<n;i++)
	    {
	        for(int j=0;j<i;j++)
	        {
	            if(arr[i]>arr[j]) dp[i]=max(dp[i],arr[i]+dp[j]);
	            maxi=max(maxi,dp[i]);
	        }
	    }
	    return maxi;
	}  
```
