[Find an Replace in String](https://practice.geeksforgeeks.org/problems/find-an-replace-in-string/1#)
```cpp
class Solution {
  public:
    string findAndReplace(string S ,int Q, int index[], string sources[], string targets[]) {
        string ans;
        int j=0;
        for(int i=0;i<S.length();i++)
        {
            bool ok=false;
            if(j<Q && i==index[j])
            {
                int len=sources[j].length();
                //cout<<S.substr(i,len)<<" "<<sources[j]<<'\n';
                if(S.substr(i,len)==sources[j])
                {ans += targets[j];i+=len-1;ok=true;}
                j++;
            }
            if(!ok) ans += S[i];
        }
        return ans;
    }
};
```
