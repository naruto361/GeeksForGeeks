[Tranform String](https://practice.geeksforgeeks.org/problems/transform-string5648/1)
```cpp
class Solution
{
    public:
    int transform (string A, string B)
    {
        //code here.
        if(A.length() != B.length()) return -1;
        int i=A.length()-1,j=B.length()-1;//A,B
        int diff=0;
        while(i>=0)
        {
            if(A[i]==B[j])
            {
                i--;j--;
            }
            else
            {
                i--;
                ++diff;
            }
        }
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        if(A!=B) return -1;
        return diff;
        
    }
};
```
