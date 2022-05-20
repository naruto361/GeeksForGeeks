[A Special Keyboard](https://practice.geeksforgeeks.org/problems/228d0aa9f26db93ee5b2cb3583dbd4b197447e16/1)
```cpp
class Solution {
  public:
    int findTime(string S1, string S2) {
        unordered_map<char,int> mp;
        for(int i=0;i<S1.length();i++) mp[S1[i]]=i;
        int ans=mp[S2[0]];
        for(int i=1;i<S2.length();i++)
        {
            ans += abs(mp[S2[i]]-mp[S2[i-1]]);
        }
        return ans;
    }
};
```
