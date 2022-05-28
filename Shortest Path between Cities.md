  ```cpp
  int shortestPath( int x, int y){ 
        map<int,int> dist;
        int i=0;
        while(x>=1)
        {
         dist[x]=i++;
         x/=2;
        }
        int ans=0;
        while(y>=1)
        {
            if(dist.find(y)!=dist.end()) {ans += dist[y];break;}
            ans++;
            y/=2;
        }
        return ans;
    }
  ```
