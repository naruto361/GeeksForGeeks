```cpp
class Solution{
    public:
    string colName (long long int n)
    {
        // your code here
        string ans;
        while(n>0)
        {
            int r=n%26;
            if(r==0) r=26;
            r--;
            ans += r+'A';
            n--;
            n/=26;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
```
