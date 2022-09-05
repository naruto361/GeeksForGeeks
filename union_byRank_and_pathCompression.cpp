#include <bits/stdc++.h>
using namespace std;
int par[11];
int rankN[11];
int findF(int node)
{
    if(par[node]==node)
        return node;
    return par[node]=findF(par[node]);
}
void unionF(int u,int v)
{
    int x=findF(u);
    int y=findF(v);
    if(x==y) return ;
    if(rankN[x]>rankN[y])
    {
        par[y]=x;
    }
    else if(rankN[y]>rankN[x])
    {
        par[x]=y;
    }
    else // rank is same
    {
        rankN[x]++;
        par[y]=x;
    }
    
}
void print(){
    for(int i=1;i<=8;i++)
    {
        cout<<i<<" : par is "<<par[i]<<" && rank is "<<rankN[i]<<'\n';
    }
}
int main()
{
    for(int i=0;i<=10;i++) {par[i]=i;rankN[i]=0;}
    // unionF(1,2);
    // unionF(2,3);
    // unionF(5,6);
    // unionF(3,6);
    int t;cin>>t;
    while(t--)
    {
        int a,b;cin>>a>>b;
        unionF(a,b);
    }
    print();
}
