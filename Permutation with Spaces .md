[Permutation with Spaces ](https://practice.geeksforgeeks.org/problems/permutation-with-spaces3627/1)
```cpp
class Solution{
public:

    vector<string> permutation(string S){
        // Code Here
        int len=S.length();
        int n=len-1;
        vector<string> ans;
        for(int i=0;i<(1<<n);i++)
        {
            string temp;
            temp+=S[0];
            vector<int> v(n,0);
            for(int j=0;j<n;j++)
            {
                //cout<<i<<" "<<j<<" "<<(i&(1<<j))<<'\n';
                if((i&(1<<j))) v[j]=1;
            }
            reverse(v.begin(),v.end());
            for(int i=0;i<n;i++)
            {
                if(!v[i]) temp+=' ';
                temp+=S[i+1];
            }
            ans.push_back(temp);
        }
        //reverse(ans.begin(),ans.end());
        return ans;
    }
};
```
