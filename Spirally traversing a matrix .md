```cpp
vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        vector<int> dp;
        int up=0,down=r-1,left=0,right=c-1;
        int dir=0;
        while(up<=down && left<=right)
        {
            if(dir==0) // right
            {
                for(int i=left;i<=right;i++) dp.push_back(matrix[up][i]);
                up++;
            }
            else if(dir==1) // down
            {
                for(int i=up;i<=down;i++) dp.push_back(matrix[i][right]);
                right--;
            }
            else if(dir==2) // left
            {
                for(int i=right;i>=left;i--) dp.push_back(matrix[down][i]);
                down--;
            }
            else // up
            {
                for(int i=down;i>=up;i--) dp.push_back(matrix[i][left]);
                left++;
            }
            dir++;
            dir%=4;
        }
        return dp;
    }
    ```
