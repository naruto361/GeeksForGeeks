```cpp
class Solution {
public:
int MaxGold(vector<vector<int>>&matrix){
    // Code here
    int m=matrix.size() , n=matrix[0].size();\
    for(int i=m-2;i>=0;i--)
    {
        for(int j=0;j<n;j++)
        {
            if(matrix[i][j]<0) 
            {
                continue;
            }
            int left=INT_MIN,right=INT_MIN,down=matrix[i+1][j];
            if(j-1>=0) left=matrix[i+1][j-1];
            if(j+1<n) right=matrix[i+1][j+1];
            int k=max({left,right,down});
            if(k<0) k=0;
            matrix[i][j]+=k;
        }
    }
    return max(0,*max_element(matrix[0].begin(),matrix[0].end()));
}
};
```
