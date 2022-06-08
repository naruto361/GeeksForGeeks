[Minimum Cost Path](https://practice.geeksforgeeks.org/problems/minimum-cost-path3833/1/?page=4&difficulty[]=1&difficulty[]=2&status[]=unsolved&sortBy=submissions)
```
BFS + DIJKSTRA
```

```
#define pii pair<int,int>
class Solution
{
    public:
    //Function to return the minimum cost to react at bottom
	//right cell from top left cell.
	vector<int> dx={0,1,0,-1};
	vector<int> dy={1,0,-1,0};
	bool isValid(int i,int j,vector<vector<int>> &grid,vector<vector<int>> &dist)
	{
	    if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || dist[i][j]!=-1)
	        return false;
	    return true;
	}
    int minimumCostPath(vector<vector<int>>& grid) 
    {
        int n=grid.size();
        vector<vector<int>> dist(n,vector<int> (n,-1));
        priority_queue<pair<int,pii> , vector<pair<int,pii>> , greater<>> pq;
        pq.push({0,{0,0}});
        dist[0][0]=grid[0][0];
        while(!pq.empty())
        {
            int x=pq.top().second.first , y=pq.top().second.second;
            pq.pop();
            int d=dist[x][y];
            for(int k=0;k<4;k++)
            {
                int newx=x+dx[k];
                int newy=y+dy[k];
                if(isValid(newx,newy,grid,dist))
                {
                    dist[newx][newy]=d+grid[newx][newy];
                    pq.push({dist[newx][newy],{newx,newy}});
                }
            }
        }
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=0;j<n;j++) cout<<dist[i][j]<<' ';
        //     cout<<'\n';
        // }
        return dist[n-1][n-1];
    }
};
```
