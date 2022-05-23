[Minimum Points To Reach Destination](https://practice.geeksforgeeks.org/problems/minimum-points-to-reach-destination0540/1)
```cpp
int minPoints(vector<vector<int>> points, int M, int N) 
	{ 
	    int m=points.size() , n=points[0].size();
	    int dp[m][n]={0};
	    for(int i=m-1;i>=0;i--)
	    {
	        for(int j=n-1;j>=0;j--)
	        {
	            if(i==m-1 && j==n-1) dp[i][j]=1-points[i][j];
	            else if(i==m-1) dp[i][j]=dp[i][j+1]-points[i][j];
	            else if(j==n-1) dp[i][j]=dp[i+1][j]-points[i][j];
	            else dp[i][j]=min(dp[i+1][j],dp[i][j+1])-points[i][j];
	            dp[i][j]=max(1,dp[i][j]);
	        }
	    }
	    return dp[0][0];
	} 
```
